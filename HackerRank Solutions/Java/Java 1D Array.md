# Java 1D Array

https://www.hackerrank.com/challenges/java-1d-array-introduction/problem?isFullScreen=true

# Solution

```
public class Solution {
    public static void main(String[] args) throws IOException {
        
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        
        int[] arr = new int[n];
        for(int i = 0; i < n; i++)
            arr[i] = scan.nextInt();
            
        for(int num : arr)
            System.out.println(num);
        
        scan.close();
    }
}
```