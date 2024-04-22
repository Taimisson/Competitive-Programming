# Java String Tokens

https://www.hackerrank.com/challenges/java-string-tokens/problem?isFullScreen=true

# Solution
```
import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();

        if (s==null || s==" " || s.trim().isEmpty()) 
            System.out.println(0);
        else{
            s=s.trim();
            String[] tokens = s.split("[ ,*'.?_@!']+");
            System.out.println(tokens.length);

            for(String token : tokens)
            System.out.println(token);
    
            scan.close();
        }
    }
}
```