package Book.thread;
import java.util.Scanner;

public class TstInter {
    public static void main(String[] args) {
        // Create a Scanner object for reading user input
        Scanner scanner = new Scanner(System.in);

        // Create three threads with different text and sleep intervals
        Ecrit3 e1 = new Ecrit3("bonjour ", 500);  // Create first thread to print "bonjour "
        Ecrit3 e2 = new Ecrit3("bonsoir ", 1000); // Create second thread to print "bonsoir "
        Ecrit3 e3 = new Ecrit3("\n", 350);       // Create third thread to print newlines
//
//        // Start each thread
//        e1.start();  // Start the first thread
//        e2.start();  // Start the second thread
//        e3.start();  // Start the third thread
//
//        // Wait for user input to interrupt the first thread
//        System.out.println("Press Enter to stop the first thread...");
//        scanner.nextLine();  // Wait for the user to press enter
//        e1.interrupt();  // Interrupt the first thread
//        System.out.println("\n*** Stopping first thread ***");
//
//        // Wait for another user input to interrupt the second and third threads
//        System.out.println("Press Enter to stop the last two threads...");
//        scanner.nextLine();  // Wait for the user to press enter
//        e2.interrupt();  // Interrupt the second thread
//        e3.interrupt();  // Interrupt the third thread
//        System.out.println("\n*** Stopping last two threads ***");
//
//        // Close the scanner
        e1.setDaemon(true);
        e1.start();         // Starting thread e1 as a daemon

        e2.setDaemon(true);
        e2.start();         // Starting thread e2 as a daemon

        e3.setDaemon(true);
        e3.start();
        scanner.nextLine();
        scanner.close();
    }
}


class Ecrit3 extends Thread {
    private String texte;   // Text to print
    private long attente;   // Time to sleep between prints (milliseconds)

    // Constructor to initialize the text and the sleep duration
    public Ecrit3(String texte, long attente) {
        this.texte = texte;
        this.attente = attente;
    }

    // The run() method will be executed when the thread starts
    public void run() {
        try {
            while (true) {  // Infinite loop
                // Check if the thread has been interrupted
                if (interrupted()) return;
                // Print the text
                System.out.print(texte);
                // Sleep for the specified duration (attente)
                sleep(attente);
            }
        } catch (InterruptedException e) {
            // If interrupted during sleep, exit the thread
            return;
        }
    }
}
