package Book.chap2;

public class LinkedList {
    private Listnode head;
    private int length = 0;

    // Default constructor
    public LinkedList() {
        length = 0;
    }

    // Return the first node/head in the list
    public synchronized Listnode getHead() {
        return head;
    }

    // Insert a node at the beginning of the list
    public synchronized void insertAtBegin(Listnode node) {
        node.next = head;
        head = node;
        length++;
    }

    // Insert a node at the end of the list
    public synchronized void insertAtEnd(Listnode node) {
        if (head == null) {
            head = node;
        } else {
            Listnode p, q;
            for (p = head; (q = p.next) != null; p = q);
            p.next = node;
        }
        length++;
    }

    // Add a new value to the list at a given position. All values at that position to the end move over to make room.
    public void insert(int data, int position) {
        if (position < 0) {
            position = 0;
        }
        if (position > length) {
            position = length;
        }

        if (head == null) {
            head = new Listnode(data);
        } else if (position == 0) {
            Listnode temp = new Listnode(data);
            temp.next = head;
            head = temp;
        } else {
            Listnode temp = head;
            for (int i = 1; i < position; i++) {
                temp = temp.next;
            }
            Listnode newNode = new Listnode(data);
            newNode.next = temp.next;
            temp.next = newNode;
        }
        length++;
    }

    // Remove and return the node at the head of the list
    public synchronized Listnode removeFromBegin() {
        Listnode node = head;
        if (node != null) {
            head = node.next;
            node.next = null;
            length--;
        }
        return node;
    }

    // Remove and return the node at the end of the list
    public synchronized Listnode removeFromEnd() {
        if (head == null) {
            return null;
        }

        Listnode p = head, q = null, next = head.next;
        if (next == null) {
            head = null;
            length--;
            return p;
        }

        while ((next = p.next) != null) {
            q = p;
            p = next;
        }
        q.next = null;
        length--;
        return p;
    }

    // Remove a node matching the specified node from the list
    public synchronized void removeMatched(Listnode node) {
        if (head == null) {
            return;
        }

        if (node.equals(head)) {
            head = head.next;
            length--;
            return;
        }

        Listnode p = head, q = null;
        while ((q = p.next) != null) {
            if (node.equals(q)) {
                p.next = q.next;
                length--;
                return;
            }
            p = q;
        }
    }

    // Remove the value at a given position
    public void remove(int position) {
        if (position < 0) {
            position = 0;
        }
        if (position >= length) {
            position = length - 1;
        }

        if (head == null) {
            return;
        }

        if (position == 0) {
            head = head.next;
        } else {
            Listnode temp = head;
            for (int i = 1; i < position; i++) {
                temp = temp.next;
            }
            temp.next = temp.next.next;
        }
        length--;
    }

    // Return a string representation of this collection
    public String toString() {
        StringBuilder result = new StringBuilder("[");
        if (head == null) {
            return result.append("]").toString();
        }

        result.append(head.data);
        Listnode temp = head.next;
        while (temp != null) {
            result.append(",").append(temp.data);
            temp = temp.next;
        }
        return result.append("]").toString();
    }

    // Return the current length of the list
    public int length() {
        return length;
    }

    // Find the position of the first value that is equal to a given value
    public int getPosition(int data) {
        Listnode temp = head;
        int pos = 0;
        while (temp != null) {
            if (temp.data == data) {
                return pos;
            }
            pos++;
            temp = temp.next;
        }
        return Integer.MIN_VALUE;
    }

    // Remove everything from the list
    public void clearList() {
        head = null;
        length = 0;
    }
}

class Listnode {
    int data;
    Listnode next;

    Listnode(int data) {
        this.data = data;
    }

    @Override
    public boolean equals(Object obj) {
        if (this == obj) return true;
        if (obj == null || getClass() != obj.getClass()) return false;
        Listnode listNode = (Listnode) obj;
        return data == listNode.data;

    }
}

