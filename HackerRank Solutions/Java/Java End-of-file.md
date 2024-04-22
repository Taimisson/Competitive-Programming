# Java End-of-file

https://www.hackerrank.com/challenges/java-end-of-file/problem?isFullScreen=true

# Solution

```
public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int count = 0;
        while(scan.hasNext()){
            String word = scan.nextLine();
            System.out.println(++count + " " + word);
        }
    }
}
```