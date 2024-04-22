# Simple Array Sum

Given an array of integers, find the sum of its elements.

[Simple Array Sum - HackerRank](https://www.hackerrank.com/challenges/simple-array-sum/problem?isFullScreen=true)

# Solution

```
int simpleArraySum(vector<int> ar) {
    int sum = 0;
    for(int i = 0; i < ar.size(); i++)
        sum += ar[i];
        
    return sum;
}```