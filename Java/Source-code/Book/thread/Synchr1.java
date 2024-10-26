package Book.thread;

import java.util.Scanner;

public class Synchr1 {
    public static void main(String[] args) {
        Nombres nomb = new Nombres();     // Create a shared object 'nomb'

        Thread calc = new ThrCalc(nomb);  // Create the 'calc' thread for calculation
        Thread aff = new ThrAff(nomb);    // Create the 'aff' thread for display

        System.out.println("Suite de carres - tapez retour pour arreter");  // Message to user

        calc.start();   // Start the calculation thread
        aff.start();    // Start the display thread

        // Wait for user input to stop the program
        Scanner scanner = new Scanner(System.in);
        scanner.nextLine();  // Wait for the user to press enter

        // Interrupt the threads to stop them
        calc.interrupt();  // Stop the 'calc' thread
        aff.interrupt();   // Stop the 'aff' thread

        // Close the scanner
        scanner.close();
    }
}

class Nombres {
    private int n = 0, carre;  // Variables to hold the number and its square

    // Synchronized method to calculate the square
    public synchronized void calcul() {
        n++;                   // Increment the number

        for (int i = 0; i < 10000000; i++) {
            carre = n +1;
        }
    }

    // Synchronized method to display the number and its square
    public synchronized void affiche() {
        System.out.println(n + " a pour carre " + carre);  // Display the number and square
    }
}

class ThrCalc extends Thread {
    private Nombres nomb;  // Reference to the shared 'Nombres' object

    public ThrCalc(Nombres nomb) {
        this.nomb = nomb;  // Initialize the shared object
    }

    public void run() {
        try {
            while (!interrupted()) {  // Loop until the thread is interrupted
                nomb.calcul();        // Call the synchronized 'calcul' method
                sleep(1);            // Sleep for 2 milliseconds
            }
        } catch (InterruptedException e) {
            // Handle interruption
        }
    }
}

class ThrAff extends Thread {
    private Nombres nomb;  // Reference to the shared 'Nombres' object

    public ThrAff(Nombres nomb) {
        this.nomb = nomb;  // Initialize the shared object
    }

    public void run() {
        try {
            while (!interrupted()) {  // Loop until the thread is interrupted
                nomb.affiche();       // Call the synchronized 'affiche' method
                sleep(1);            // Sleep for 75 milliseconds
            }
        } catch (InterruptedException e) {
            // Handle interruption
        }
    }
}

