# Java If-Else

https://www.hackerrank.com/challenges/java-if-else/problem?isFullScreen=true

# Solution

```
public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(bufferedReader.readLine().trim());

        if(N % 2 == 1 || (N % 2 == 0 && (N >= 6 && N <= 20)))
            System.out.println("Weird");
        else
            System.out.println("Not Weird");
            
        bufferedReader.close();
    }
}
```