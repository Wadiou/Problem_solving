package Book.thread;

class Reserve1 {
    private int stock = 0;  // Start with no stock

    // Synchronized method for withdrawing stock (Consumer)
    public synchronized void puise(int v) throws InterruptedException {
        while (stock < v) {  // Wait if not enough stock
            System.out.println("** Not enough stock, waiting...");
            wait();  // Wait until more stock is added
        }
        stock -= v;  // Withdraw the stock
        System.out.println("-- Withdrawn " + v + ", remaining stock: " + stock);
    }

    // Synchronized method for adding stock (Producer)
    public synchronized void ajoute(int v) {
        stock += v;  // Add stock
        System.out.println("++ Added " + v + ", total stock: " + stock);
        notifyAll();  // Notify waiting threads that stock is available
    }
}

// Producer Thread (adds stock)
class Producer extends Thread {
    private Reserve1 r;

    public Producer(Reserve1 r) {
        this.r = r;
    }

    public void run() {
        try {
            while (true) {
                r.ajoute(100);  // Add 100 units
                Thread.sleep(15000);  // Wait before adding more
            }
        } catch (InterruptedException e) {
            // Handle interruption
        }
    }
}

// Consumer Thread (withdraws stock)
class Consumer extends Thread {
    private Reserve1 r;

    public Consumer(Reserve1 r) {
        this.r = r;
    }

    public void run() {
        try {
            while (true) {
                r.puise(150);  // Try to withdraw 150 units
                Thread.sleep(10000);  // Wait before trying to withdraw again
            }
        } catch (InterruptedException e) {
            // Handle interruption
        }
    }
}

public class ProducerConsumerExample {
    public static void main(String[] args) {
        Reserve1 r = new Reserve1();
        Producer producer = new Producer(r);
        Consumer consumer = new Consumer(r);

        producer.start();  // Start the producer
        consumer.start();  // Start the consumer
    }
}
