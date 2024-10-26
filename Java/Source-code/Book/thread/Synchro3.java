package Book.thread;

import java.util.Scanner;

public class Synchro3 {
    public static void main(String args[]) {
        Reserve r = new Reserve();  // Shared reserve object

        // Create threads to add and withdraw stock
        ThrAjout ta1 = new ThrAjout(r, 100, 20000);  // Adds 100 units every 15 ms
        ThrAjout ta2 = new ThrAjout(r, 50, 10000);   // Adds 50 units every 20 ms
        ThrPuise tp = new ThrPuise(r, 300, 5000);   // Withdraws 300 units every 10 ms

        System.out.println("Suivi de stock --- faire entree pour arreter ");

        // Start all threads
        ta1.start();
        ta2.start();
        tp.start();

        // Wait for user input to stop the program
        Scanner scanner = new Scanner(System.in);
        scanner.nextLine();

        // Interrupt all threads to stop them
        ta1.interrupt();
        ta2.interrupt();
        tp.interrupt();

        // Close the scanner
        scanner.close();
    }
}

class Reserve {
    private int stock = 500;  // Initial stock set to 500

    // Synchronized method for withdrawing stock
    public synchronized void puise(int v) throws InterruptedException {
        if (v <= stock) {  // Check if enough stock is available
            System.out.print("-- on puise " + v);
            stock -= v;  // Withdraw the stock
            System.out.println(" et il reste " + stock);
        } else {  // If not enough stock, the thread waits
            System.out.println("** stock de " + stock + " insuffisant pour puiser " + v);
            wait();  // Put the thread into the waiting state
        }
    }

    // Synchronized method for adding stock
    public synchronized void ajoute(int v) {
        stock += v;  // Add stock
        System.out.println("++ on ajoute " + v + " et il y a maintenant " + stock);
        notifyAll();  // Notify all waiting threads that stock has been updated
    }
}

class ThrAjout extends Thread {
    private int vol;
    private Reserve r;
    private int delai;

    public ThrAjout(Reserve r, int vol, int delai) {
        this.vol = vol;  // Volume of stock to add
        this.r = r;      // Reference to the shared reserve object
        this.delai = delai;  // Delay between additions
    }

    public void run() {
        try {
            while (!interrupted()) {  // Keep running until interrupted
                r.ajoute(vol);  // Add stock to the reserve
                sleep(delai);   // Sleep for the given delay
            }
        } catch (InterruptedException e) {
            // Handle interruption
        }
    }
}

class ThrPuise extends Thread {
    private int vol;
    private Reserve r;
    private int delai;

    public ThrPuise(Reserve r, int vol, int delai) {
        this.vol = vol;  // Volume of stock to withdraw
        this.r = r;      // Reference to the shared reserve object
        this.delai = delai;  // Delay between withdrawal attempts
    }

    public void run() {
        try {
            while (!interrupted()) {  // Keep running until interrupted
                r.puise(vol);  // Attempt to withdraw stock
                sleep(delai);  // Sleep for the given delay
            }
        } catch (InterruptedException e) {
            // Handle interruption
        }
    }
}

