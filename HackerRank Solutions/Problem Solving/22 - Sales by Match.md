# Sales by Match

There is a large pile of socks that must be paired by color. Given an array of integers representing the color of each sock, determine how many pairs of socks with matching colors there are.

[Sales by Match - HackerRank](https://www.hackerrank.com/challenges/sock-merchant/problem?isFullScreen=true)

# Solution

```
int sockMerchant(int n, vector<int> colors) {
    unordered_map<int, int> colorCounts;
    for(int color : colors)
        colorCounts[color]++;
        
    int pairs = 0;
    for(auto count : colorCounts)
        pairs += count.second / 2;
    
    return pairs;
}
```