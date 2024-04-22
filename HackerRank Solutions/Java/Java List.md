# Java List

https://www.hackerrank.com/challenges/java-list/problem?isFullScreen=true

# Solution

```
import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        
        ArrayList<Integer> arr = new ArrayList<>();
        int getNum;
        
        for(int i = 0; i < n; i++){
            getNum = scan.nextInt();
            arr.add(getNum);
        }
        
        int getQueries = scan.nextInt();
        
        for(int i = 0; i < getQueries; i++){
            scan.nextLine();
            
            String getInput = scan.nextLine();
            if(getInput.equals("Insert")){
                int index = scan.nextInt();
                int newNumber = scan.nextInt();
                arr.add(index, newNumber);
            }else if(getInput.equals("Delete")){
                int checkNum = scan.nextInt();
                arr.remove(checkNum);
            }
        }
        
        for(int check : arr)
            System.out.print(check + " ");
         
    }
}
```