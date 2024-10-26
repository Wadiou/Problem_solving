package Book.thread;

public class TstThr1 {
    public static void main(String[] args) {
//        // Creating three threads
//        Ecrit1 e1 = new Ecrit1("bonjour", 10);  // 10 times "bonjour"
//        Ecrit1 e2 = new Ecrit1("bonsoir", 12);  // 12 times "bonsoir"
//        Ecrit1 e3 = new Ecrit1("\n", 5);        // 5 times newline
//
//        // Starting the threads
//        e1.start();  // Starts e1 thread
//        e2.start();  // Starts e2 thread
//        e3.start();  // Starts e3 thread

        // Creating three threads
        Ecrit2 E1 = new Ecrit2("bonjour", 10,500);  // 10 times "bonjour"
        Ecrit2 E2 = new Ecrit2("bonsoir", 12,1000);  // 12 times "bonsoir"
        Ecrit2 E3 = new Ecrit2("\n", 5,1500);        // 5 times newline

        // Starting the threads
        E1.start();  // Starts e1 thread
        E2.start();  // Starts e2 thread
        E3.start();  // Starts e3 thread
    }
}
class Ecrit1 extends Thread {
    private String texte;   // Text to print
    private int nb;         // Number of times to print

    // Constructor that initializes the text and number of times
    public Ecrit1(String texte, int nb) {
        this.texte = texte;
        this.nb = nb;
    }

    // The run() method is what the thread will execute when it starts
    public void run() {
        for (int i = 0; i < nb; i++) {
            System.out.print(texte);
        }
    }
}
class Ecrit2 extends Thread {
    private String texte;   // Text to print
    private int nb;         // Number of times to print
    private long attente;   // Time to sleep between prints (milliseconds)

    // Constructor that initializes the text, count, and sleep time
    public Ecrit2(String texte, int nb, long attente) {
        this.texte = texte;
        this.nb = nb;
        this.attente = attente;
    }

    // The run() method will be executed by the thread
    public void run() {
        try {
            for (int i = 0; i < nb; i++) {
                System.out.print(texte);
                super.sleep(attente);  // Pause the thread for 'attente' milliseconds
            }
        } catch (InterruptedException e) {

            e.printStackTrace();  // This handles any interruptions during sleep
        }
    }
}
