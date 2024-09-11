package Book.chap2;

public class p1 {
    public static void main(String[] args)
    {
       /* Hanoi(4,1,3);
        System.out.println(Sorted_array(new int[]{1,2,5,4},3));*/
        String n = "198";
        Integer.parseInt(n);


    }
    public static void Hanoi(int n , int start , int end)
    {
        if (n == 1) System.out.println(start +" --> " + end);
        else {
            int other = 6 - (start + end);
            Hanoi(n - 1, start, other);
            System.out.println(start + " --> " + end);
            Hanoi(n - 1, other, end);
        }
    }
    public static boolean Sorted_array(int [] arr, int n)
    {
        if (n==1) return true;
        return arr[n-2] < arr[n-1] ? Sorted_array(arr,n-1) : false ;

    }
}
