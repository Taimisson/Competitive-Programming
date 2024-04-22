# Java Generics

https://www.hackerrank.com/challenges/java-generics/problem?isFullScreen=true

# Solution

```
import java.io.*;
import java.util.*;

class Printer {
    // Generic method to print elements of an array
    public <T> void printArray(T[] array) {
        for (T element : array) {
            System.out.println(element);
        }
    }
}

public class GenericMethodExample {
    public static void main(String[] args) {
        Printer printer = new Printer();

        // Integer array
        Integer[] intArray = {1, 2, 3};
        // String array
        String[] stringArray = {"Hello", "World"};

        // Call the generic printArray method for the integer array
        printer.printArray(intArray);

        // Call the generic printArray method for the string array
        printer.printArray(stringArray);
    }
}
```