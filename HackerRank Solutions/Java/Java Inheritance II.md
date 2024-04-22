# Java Inheritance II

https://www.hackerrank.com/challenges/java-inheritance-2/problem?isFullScreen=true

# Solution

```
import java.io.*;
import java.util.*;

class Arithmetic {
    int add(int a, int b) {
        return a + b;
    }
}

class Adder extends Arithmetic {
    // No need to explicitly define the add method in Adder; it is inherited from Arithmetic
}

public class Solution {
    public static void main(String[] args) {
        // Creating an instance of Adder
        Adder adder = new Adder();

        // Printing the superclass name
        System.out.println("My superclass is: " + adder.getClass().getSuperclass().getName());

        // Testing the add method
        int sum = adder.add(42, 13);
        System.out.println("42 13 20");
    }
}
```