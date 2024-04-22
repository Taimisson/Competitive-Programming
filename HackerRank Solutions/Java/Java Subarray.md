# Java Subarray

https://www.hackerrank.com/challenges/java-negative-subarray/problem?isFullScreen=true

# Solution

```
import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner myScanner = new Scanner(System.in);
            int n = myScanner.nextInt();
            int[] arr = new int[n];
            for(int i = 0; i < n; i++)
                arr[i] = myScanner.nextInt();
                
            int count = 0;
            long s = 0;
            for(int i = 0; i < n; i++)
            {
                s = 0;
                for(int j = i; j < n; j++)
                {
                    s += arr[j];
                    if(s < 0) {
                        count++;
                    }
                }
            }
            System.out.println(count);
            myScanner.close();
    }
}
```