package Book.chap2;

public class Stackarr {
    private int[] stack;
    private int capacity = 10 , top = -1;
    public Stackarr()
    {
        this.capacity = capacity;
        stack = new int[capacity];
    }
    public Stackarr(int capacity)
    {
        this.capacity = capacity;
        stack = new int[capacity];
    }
    public void  push (int data)
    {
        if (top+1 == capacity)
        {
            capacity *= 2;
            int [] arr = new int[capacity];
            for (int i = 0; i <stack.length ; i++) {
                arr[i] = stack[i];
            }
            stack = arr;
        }
        stack[++top] = data;
    }
    public void pop() throws Exception
    {
        if (top ==-1)
        {
            throw new Exception("Stack is empty");
        }
            top--;
    }
    public int top() throws Exception
    {
        if (top ==-1)
        {
            throw new Exception("Stack is empty");
        }
        return stack[top];
    }
    public String toString()
    {
        if (top ==-1)
        {
            return "[]";
        }
        String s = "[" + stack[0];
        for (int i = 1; i <= top; i++) {
            s += ","+ String.valueOf(stack[i]);
        }
        s += "]";
        return  s;

    }

}
class test1
{
    public static void main(String[]args)
    {
        Stackarr stack = new Stackarr();
        for (int i = 0; i < 15; i++) {
            stack.push(i*i);
        }
        System.out.println(stack.toString());
    }
}
