# Java Substring Comparisons

https://www.hackerrank.com/challenges/java-string-compare/problem?isFullScreen=true

# Solution

```
import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
       
        Scanner in = new Scanner(System.in);
        
        String s = in.nextLine();
        int k = in.nextInt();     
        ArrayList<String> ls = newt ArrayList<>();      
        
        for (int i = 0;i <= s.length( )- k; i++)
            ls.add(s.substring(i, i + k));

        String[] sa = ls.toArray(new String[0]);
        Arrays.sort(sa);
        
        System.out.printf("%s%n%s",sa[0],sa[sa.length-1]);
    }
}
```
