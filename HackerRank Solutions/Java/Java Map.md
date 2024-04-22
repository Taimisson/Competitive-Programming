# Java Map

https://www.hackerrank.com/challenges/phone-book/problem?isFullScreen=true

# Solution

```
import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        scan.nextLine();
        
        Map<String, String> livrotel = new HashMap<>();
        for(int i = 0; i < n; i++){
            String name = scan.nextLine();
            String number = scan.nextLine();
            livrotel.put(name, number);
        }
        while(scan.hasNext()){
            String s = scan.nextLine();
            if(livrotel.containsKey(s))
                System.out.println(s + "=" + livrotel.get(s));
            else
                System.out.println("Not found");
        }
        
        scan.close();
    }
}
```