package Test1;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Stack;

public class test3 {
    public static void main(String[] args) {
        /*ArrayList<Integer> i = new ArrayList<>();
        i.add(1);
        i.add(1);
        i.add(1);
        i.add(5);
        System.out.println(4.5 % 2);
        System.out.println(i.indexOf(5));
         // Initialize the array of strings
        String tabCh[] = {"java", "c", "pascal", "c++", "ada", "basic", "fortran"}, temp = "Hello ii amm waddouddoudd";
        ArrayList<Integer> arrtemp = new ArrayList<>();

        arrtemp.add(4);
        arrtemp.add(1);
        arrtemp.add(3);
        arrtemp.add(2);
        arrtemp.add(7);
        arrtemp.add(5);
        Sort(arrtemp);
        for (int i : arrtemp)
        {
            System.out.println(i);
        }
        char a = 'a';
        System.out.println(++a);


        System.out.println(reverse(tabCh[0]));


        //System.out.println(Occurence(tabCh[0]));

        System.out.println(removeOccurence(temp));
        System.out.println(substring(temp,"doud"));
        System.out.println(subOccurence(temp,"dd"));
   */
        System.out.println(Math.sqrt(5)*Math.sqrt(5) == 5);
        generator("",3,3);




    }
    public static void generator(String par , int n , int p)
    {
        if ( n == 0 && 0 == p) System.out.println(par);;

        if(n > 0)
        {

            generator(par + "(",n-1,p);

        }
        if (p > n)
        {

            generator(par + ")",n,p-1);
        }

    }

    public static void Sorted(String[] tabCh, int n) {
        System.out.println("Sorted strings iteration " + n + " : ");
        for (String s : tabCh) {
            System.out.print(s + " ");
        }
        System.out.println();
    }

    public static String reverse(String string)
    {
        char array[] = string.toCharArray() , c;
        for (int i = 0; i < array.length/2 ; i++) {
            c = array[i];
            array[i] = array[array.length -1 -i];
            array[array.length -1 -i] = c;
        }
        return new String(array);
    }
    public static int Occurence(String string)
    {
        String vowels = "aueoi";
        int counter = 0;
        char arr[] = string.toCharArray();
        for (char c : arr)
        {
            if (vowels.indexOf(Character.toLowerCase(c)) != -1)
            {
                counter ++;
            }
        }
        return counter;
    }
    public static char[] move(char[] arr, int n) {
        for (int i = n; i < arr.length - 1; i++) {
            arr[i] = arr[i + 1];
        }
        arr[arr.length - 1] = '\0'; // Set the last element to null character
        return arr;
    }

    public static String removeOccurence(String str) {
        char[] arr = str.toCharArray();
        int length = arr.length;

        for (int i = 0; i < length - 1; i++) {
            if (arr[i] == arr[i + 1]) {
                arr = move(arr, i);
                length--; // Decrease the effective length of the array
                i--; // Stay on the same index to check the newly shifted character
            }
        }

        return new String(arr, 0, length).replace("\0", ""); // Create a new string without null characters
    }
    public static int substring (String string , String sub)
    {
        boolean b ;
        char[] arrmain = string.toCharArray() , arrsub = sub.toCharArray();
        if (sub.length() > string.length()) return -1;
        for (int i = 0; i < string.length() - sub.length() + 1; i++) {
            b = true;
            for (int j = 0; j < sub.length() ; j++) {
                if (arrmain[i+j] != arrsub[j])
                {
                    b = false;
                }
            }
            if (b == true) return i;
        }
        return -1;
    }
    public static int substring (String string , String sub , int n)
    {
        boolean b ;
        char[] arrmain = string.toCharArray() , arrsub = sub.toCharArray();
        if (sub.length() > string.length()) return -1;
        for (int i = n; i < string.length() - sub.length() + 1; i++) {
            b = true;
            for (int j = 0; j < sub.length() ; j++) {
                if (arrmain[i+j] != arrsub[j])
                {
                    b = false;
                }
            }
            if (b == true) return i;
        }
        return -1;
    }
    public static int subOccurence(String string , String sub)
    {
        int index = 0 , counter = 0;
      while ((index = substring(string,sub,index)) != -1)
      {
          counter++;
          index += sub.length();
      }
      return counter;
    }
    public static  ArrayList<Integer> ArrList_Duplicate(ArrayList<Integer> arr)
    {
        for (int i = 0; i < arr.size() ; i++) {
            if (arr.get(i) == arr.get(i+1))
            {
                arr.remove(i+1);
                i--;
            }

        }
        return arr;
    }
    public static void Sort (ArrayList<Integer> arr)
    {
        int len = arr.size() , temp;
        for (int i = 0; i < len; i++) {
            for (int j = 0; j < len -i -1 ; j++) {
                if (arr.get(j) > arr.get(j+1))
                {
                    temp = arr.get(j);
                    arr.set(j, arr.get(j+1));
                    arr.set(j+1 , temp);
                }
            }
        }

    }
}
