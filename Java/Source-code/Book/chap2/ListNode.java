package Book.chap2;

public class ListNode {
    private int data;
    private ListNode next;
    public ListNode(int data)
    {
        this.data = data;
        this.next = null;
    }
    public void setdata(int data)
    {
        this.data = data;
    }
    public int getData(){
        return data;
    }
    public void setNext(ListNode node)
    {
        next = node ;
    }
    public ListNode getNext()
    {
        return this.next;
    }
    public ListNode addAB(int data)
    {
        ListNode node = new ListNode(data);
        node.next = this;
        return node;
    }
    public void append(int data)
    {
        ListNode p ,q;
        for ( p = this;  (q=p.next) != null ; p=q) ;
        p.next = new ListNode(data);
    }
    public ListNode deleteAB()
    {

        return this.getNext();
    }


}
class test{
    public static void main (String[] args)
    {
        ListNode head = null;
        for (int i = 0; i <5 ; i++) {
            if (head == null) head = new ListNode(0);
            else head.append(i*i);
        }
        head = head.deleteAB();
        ListNode p = head;
        while (p != null)
        {
            System.out.print(p.getData() + " -> ");
            p = p.getNext();
        }
        System.out.println("null");
    }
}
