# Java BigInteger

https://www.hackerrank.com/challenges/java-biginteger/problem?isFullScreen=true

# Solution

```
import java.io.*;
import java.util.*;
import java.math.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        BigInteger c = sc.nextBigInteger();
        BigInteger d = sc. nextBigInteger();

        System.out.println(c.add(d));
        System.out.println(c.multiply(d));

        sc.close();
    }
}
```