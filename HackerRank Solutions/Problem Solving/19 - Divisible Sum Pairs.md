# Divisible Sum Pairs

Given an array of integers and a positive integer , determine the number of  pairs where  and  +  is divisible by .

[Divisible Sum Pairs - HackerRank](https://www.hackerrank.com/challenges/divisible-sum-pairs/problem?isFullScreen=true)

# Solution

```
int divisibleSumPairs(int n, int k, vector<int> ar) {
    int count = 0;
    for(int i = 0; i < n; ++i)
        for(int j = i + 1; j < n; ++j)
            if((ar[i] + ar[j]) % k == 0)
                count++;
                
    return count;
}
```