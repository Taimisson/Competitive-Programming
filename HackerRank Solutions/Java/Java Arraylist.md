# Java Arraylist

https://www.hackerrank.com/challenges/java-arraylist/problem?isFullScreen=true

# Solution

```
import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        ArrayList<ArrayList<Integer>> lines = new ArrayList<>();
        int n = scan.nextInt();
        
        for(int i = 0; i < n; i++){
            ArrayList<Integer> line = new ArrayList<>();
            int d = scan.nextInt();
            for(int j = 0; j < d; j++)
                line.add(scan.nextInt());
            lines.add(line);
        }
        
        int q = scan.nextInt(); 
        
        for(int i = 0; i < q; i++){
            int x = scan.nextInt();
            int y = scan.nextInt();
            
            if(x <= lines.size() && y <= lines.get(x - 1).size())
                System.out.println(lines.get(x - 1).get(y - 1));
            else
                System.out.println("ERROR!");
        }
        scan.close();
    }
}
```