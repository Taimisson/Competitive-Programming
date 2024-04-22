# Java String Reverse

https://www.hackerrank.com/challenges/java-string-reverse/problem?isFullScreen=true

# Solution

```
import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        
        String a = scan.nextLine();
        
        StringBuilder b = new StringBuilder();
        
        b.append(a);
        b.reverse();
        
        boolean palindrome = true;
        for(int i = 0; i < a.length(); ++i)
            if(a.charAt(i) != b.charAt(i)){
                palindrome = false;
                break;
            }
        
        System.out.println(palindrome ? "Yes" : "No");
                
    }
}
```

```
public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        String A = sc.next();

        if(A.equals(new StringBuffer(A).reverse().toString())) 
            System.out.println("Yes");
        else 
             System.out.println("No");
        
    }
```