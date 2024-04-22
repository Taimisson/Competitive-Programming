# Java Static Initializer Block

https://www.hackerrank.com/challenges/java-static-initializer-block/problem?isFullScreen=true

# Solution

```
public class Solution {
    static int B;
    static int H;
    static boolean flag;
    
    static {
        Scanner scan = new Scanner(System.in);
        B = scan.nextInt();
        H = scan.nextInt();
        
        if(B > 0 && H > 0) 
            flag = true;    
        else 
            System.out.println("java.lang.Exception: Breadth and height must be positive");
        
        scan.close();
    }
    
    public static void main(String[] args) {
        if(flag){
            int area = B * H;
            System.out.println(area);
        }
    }
}
```