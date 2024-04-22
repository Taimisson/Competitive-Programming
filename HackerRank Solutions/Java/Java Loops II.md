# Java Loops II

https://www.hackerrank.com/challenges/java-loops/problem?isFullScreen=true

# Solution

```
import java.io.*;
import java.util.*;

public class SeriesCalculator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int queries = scanner.nextInt();  

        for (int i = 0; i < queries; i++) {
            int a = scanner.nextInt();
            int b = scanner.nextInt();
            int n = scanner.nextInt();

            printSeries(a, b, n);  
        }

        scanner.close();
    }

    private static void printSeries(int a, int b, int n) {
        int currentTerm = a;

        for (int j = 0; j < n; j++) {
            currentTerm += (Math.pow(2, j) * b);
            System.out.print(currentTerm + " ");
        }
        System.out.println();
    }
}
```