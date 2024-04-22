# A Very Big Sum

In this challenge, you are required to calculate and print the sum of the elements in an array, keeping in mind that some of those integers may be quite large.

[A Very Big Sum - HackerRank](https://www.hackerrank.com/challenges/a-very-big-sum/problem?isFullScreen=true)

# Solution

```
long aVeryBigSum(vector<long> ar) {
    long sum = 0;
    for(long num : ar) // for it
        sum += num;
        
    return sum;
}```