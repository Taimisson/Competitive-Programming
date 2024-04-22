# Find Digits

Given an integer, for each digit that makes up the integer determine whether it is a divisor. Count the number of divisors occurring within the integer.

[Find Digits - HackerRank](https://www.hackerrank.com/challenges/find-digits/problem?isFullScreen=true)

# Solution

```
int findDigits(int n) {
    int answer = 0, original = n;
    while (n){
        int d = n % 10; // get the last digit
        if(d != 0 && original % d == 0){ // check if the digit is a divisor of the original number
            answer++;
        }
        n /= 10; // remove the last digit
    }
    return answer;
}
```