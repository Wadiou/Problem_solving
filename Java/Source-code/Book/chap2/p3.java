package Book.chap2;

import java.util.*;

public class p3 {
    public static void main (String [] args) throws InterruptedException {
        /*Scanner s = new Scanner(System.in);
        System.out.print("Enter a number : ");
        int n = s.nextInt();
        char A[] = new char[n];
        displayStr(A,A.length);
        for (int i = 10000 , j = 0; i >=1 ; i/=2 , j++) {
            System.out.println(j*j);
            Thread.sleep(i);
        }
        System.out.println(lengthOfLongestSubstring("abcabcbb")); // Output: 3
        System.out.println(lengthOfLongestSubstring("bbbbb"));    // Output: 1
        System.out.println(lengthOfLongestSubstring("pwwkew"));
        System.out.println(-15%10);
        Stack<Integer> s = new Stack<>();
        s.push(3);
        System.out.println(s.pop());*/
        displayStr("",3);
    }
    public static int lengthOfLongestSubstring(String s) {
        if (s.isEmpty() || s.length() == 1) return s.length();
        int maxlen = 1;
        for (int i = 0; i < s.length(); i++) {
            HashSet<Character> sub = new HashSet<>();
            for (int j = i + 1; j < s.length(); j++) {
                if(!sub.contains(s.charAt(j)))
                {
                    sub.add(s.charAt(j));
                    maxlen = maxlen > sub.size() ? maxlen : sub.size();
                }
            }
        }
        return maxlen;
    }
    public static void displayStr(String arr,int n)
    {
        if (n==0) System.out.println(arr);
        else{
            for (char i = 'a'; i <= 'z'; i++) {

                displayStr(arr + i,n-1);
            }

    }}
    static void arrtostr(int arr[])
    {
        for (int i : arr) {
            System.out.print(i);
        }
        System.out.println();
    }
}
