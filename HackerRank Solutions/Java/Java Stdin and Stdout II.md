# Java Stdin and Stdout II

https://www.hackerrank.com/challenges/java-stdin-stdout/problem?isFullScreen=true

# Solution

```
public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        
        int num = scan.nextInt();
        double num2 = scan.nextDouble();
        scan.nextLine();
        String s = scan.nextLine();
        
        System.out.println("String: " + s);
        System.out.println("Double: " + num2);
        System.out.println("Int: " + num);
    }
}
```