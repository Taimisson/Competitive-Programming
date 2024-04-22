# Java Strings Introduction

https://www.hackerrank.com/challenges/java-strings-introduction/problem?isFullScreen=true

# Solution

```
import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        
        String A = scan.nextLine();
        String B = scan.nextLine();
        
        System.out.println(A.length() + B.length());
        System.out.println(A.compareTo(B) > 0 ? "Yes" : "No");
        
        String A1 = A.substring(0,1).toUpperCase() + A.substring(1);
        String B1 = B.substring(0,1).toUpperCase() + B.substring(1);
        System.out.println(A1 + " " + B1);
    }
};
```