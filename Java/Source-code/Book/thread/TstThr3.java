package Book.thread;

class Ecrit implements Runnable {
    private String texte;   // Text to print
    private int nb;         // Number of times to print
    private long attente;   // Sleep time (milliseconds) between prints

    // Constructor initializes the text, count, and sleep time
    public Ecrit(String texte, int nb, long attente) {
        this.texte = texte;
        this.nb = nb;
        this.attente = attente;
    }

    // The run() method will be executed by the thread
    public void run() {
        try {
            for (int i = 0; i < nb; i++) {
                System.out.print(texte);
                Thread.sleep(attente);  // Pause the thread for 'attente' milliseconds
            }
        } catch (InterruptedException e) {
            // Handle the exception thrown by sleep()
            System.out.println("Thread was interrupted during sleep.");
            e.printStackTrace();  // Prints detailed information about the exception
        }
    }
}

public class TstThr3 {
    public static void main(String[] args) {
        // Creating three Ecrit objects, each implementing Runnable
        Ecrit e1 = new Ecrit("bonjour ", 10, 500);  // Prints "bonjour" 10 times with 500ms sleep
        Ecrit e2 = new Ecrit("bonsoir ", 12, 1000); // Prints "bonsoir" 12 times with 1000ms sleep
        Ecrit e3 = new Ecrit("\n", 5, 1500);        // Prints newline 5 times with 1500ms sleep

        // Creating Thread objects and passing Ecrit objects (Runnable) to them
        Thread t1 = new Thread(e1);  // t1 thread will run e1's run() method
        Thread t2 = new Thread(e2);  // t2 thread will run e2's run() method
        Thread t3 = new Thread(e3);  // t3 thread will run e3's run() method

        // Starting the threads
        t1.start();  // Starts t1 thread, which calls e1's run() method
        t2.start();  // Starts t2 thread, which calls e2's run() method
        t3.start();  // Starts t3 thread, which calls e3's run() method

        // Optionally interrupt one of the threads to trigger the exception
        try {
            Thread.sleep(2000);  // Let the threads run for 2 seconds
            t1.interrupt();      // Interrupt t1 to demonstrate exception handling
        } catch (InterruptedException e) {
            e.printStackTrace();  // This handles any interruption of the main thread
        }
    }
}
