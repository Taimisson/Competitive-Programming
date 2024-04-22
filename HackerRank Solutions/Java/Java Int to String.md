# Java Int to String

https://www.hackerrank.com/challenges/java-int-to-string/problem?isFullScreen=true

# Solution

```
import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        
        int n = scan.nextInt();
        
        String s = Integer.toString(n);
        
        if(s instanceof String)
            System.out.println("Good job");
        else
            System.out.println("Wrong answer");
        
    }
}
```