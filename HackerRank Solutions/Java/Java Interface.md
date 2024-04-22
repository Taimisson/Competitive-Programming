# Java Interface

https://www.hackerrank.com/challenges/java-interface/problem?isFullScreen=true

# Solution

```
import java.io.*;
import java.util.*;

public class Solution 
{

    public static void main(String[] args) 
    {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        MyCalculator calculator = new MyCalculator();
        System.out.println(calculator.divisor_sum(n));
    }
}
interface AdvancedArithmetic
{
    int divisor_sum(int n);
}
class MyCalculator implements AdvancedArithmetic
{
    MyCalculator()
    {
        System.out.println("I implemented: "+getClass().getInterfaces()[0].getName());
    }
    @Override
    public int divisor_sum(int n)
    {
        int sum=0;
        for(int i=1;i<=n ;i++)
        {
            if(n % i ==0) sum +=i;
            
        }
        return sum;
    }
}
```