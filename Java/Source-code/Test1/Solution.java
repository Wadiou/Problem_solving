package Test1;


import java.util.LinkedList;
import java.util.Stack;

class Solution {
    public int evalRPN(String[] tokens) {
        if (tokens.length == 1) return Integer.parseInt(tokens[0]);
        Stack<Integer> int_stack = new Stack<>();

        int val1, val2;
        for (int i = 0; i < tokens.length; i++) {
            if (isnum(tokens[i])) {
                int_stack.push(Integer.parseInt(tokens[i]));
            } else {
                // Ensure there are enough elements on the stack
                if (int_stack.size() < 2) throw new IllegalArgumentException("Invalid RPN expression");

                val1 = int_stack.pop();
                val2 = int_stack.pop();
                int_stack.push(operation(tokens[i], val2, val1));
            }
        }
        if (int_stack.size() != 1) throw new IllegalArgumentException("Invalid RPN expression");
        return int_stack.pop();
    }

    public boolean isnum(String s) {
        // Handle negative numbers and multi-digit numbers
        return s.matches("-?\\d+");
    }

    public int operation(String s, int a, int b) {
        switch (s) {
            case "+":
                return a + b;
            case "-":
                return a - b;
            case "/":
                return a / b;
            case "*":
                return a * b;
            default:
                throw new IllegalArgumentException("Invalid operator: " + s);
        }
    }
}
