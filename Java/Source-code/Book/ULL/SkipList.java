package Book.ULL;

import java.util.Random;

public class SkipList<T extends Comparable<T>, U> {

     class Node {
        T key;
        U value;
        Node[] next;

        @SuppressWarnings("unchecked")
        Node(T key, U value, int level) {
            this.key = key;
            this.value = value;
            this.next =  (Node[]) new Object[level + 1];
        }
    }

    private static final int MAX_LEVEL = 16;
    private final Node head;
    private final Random random;
    private int currentLevel;

    public SkipList() {
        this.head = new Node(null, null, MAX_LEVEL);
        this.random = new Random();
        this.currentLevel = 0;
    }

    private int generateLevel() {
        int level = 0;
        while (level < MAX_LEVEL && random.nextDouble() < 0.5) {
            level++;
        }
        return level;
    }

    public void add(T key, U value) {
        Node[] update = (Node[]) new Object[MAX_LEVEL + 1];
        Node current = head;

        for (int i = currentLevel; i >= 0; i--) {
            while (current.next[i] != null && current.next[i].key.compareTo(key) < 0) {
                current = current.next[i];
            }
            update[i] = current;
        }

        int newLevel = generateLevel();
        if (newLevel > currentLevel) {
            for (int i = currentLevel + 1; i <= newLevel; i++) {
                update[i] = head;
            }
            currentLevel = newLevel;
        }

        Node newNode = new Node(key, value, newLevel);
        for (int i = 0; i <= newLevel; i++) {
            newNode.next[i] = update[i].next[i];
            update[i].next[i] = newNode;
        }
    }

    public boolean containsKey(T key) {
        return get(key) != null;
    }

    public U remove(T key) {
        Node[] update = (Node[]) new Object [MAX_LEVEL + 1];
        Node current = head;

        for (int i = currentLevel; i >= 0; i--) {
            while (current.next[i] != null && current.next[i].key.compareTo(key) < 0) {
                current = current.next[i];
            }
            update[i] = current;
        }

        Node target = current.next[0];
        if (target != null && target.key.equals(key)) {
            for (int i = 0; i <= currentLevel; i++) {
                if (update[i].next[i] != target) {
                    break;
                }
                update[i].next[i] = target.next[i];
            }
            while (currentLevel > 0 && head.next[currentLevel] == null) {
                currentLevel--;
            }
            return target.value;
        }
        return null;
    }

    public U get(T key) {
        Node current = head;
        for (int i = currentLevel; i >= 0; i--) {
            while (current.next[i] != null && current.next[i].key.compareTo(key) < 0) {
                current = current.next[i];
            }
        }
        current = current.next[0];
        if (current != null && current.key.equals(key)) {
            return current.value;
        }
        return null;
    }

    public static void main(String[] args) {
        SkipList<Integer, Integer> skipList = new SkipList<>();
        skipList.add(1, 100);
        System.out.println(skipList.get(1)); // Output: 100
        skipList.add(2, 200);
        System.out.println(skipList.get(2)); // Output: 200
        skipList.remove(1);
        System.out.println(skipList.get(1)); // Output: null
    }
}
