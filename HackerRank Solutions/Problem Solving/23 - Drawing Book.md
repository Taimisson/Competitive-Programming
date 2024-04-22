# Drawing Book

Given  and , find and print the minimum number of pages that must be turned in order to arrive at page .

[Drawing Book - HackerRank](https://www.hackerrank.com/challenges/drawing-book/problem?isFullScreen=true)

# Solution

```
int pageCount(int n, int p) {
    // n = number of pages
    // p = the page needs to be opened
    if (p == 1 || p == n) return 0;
    
    // n/2 - minAttempts = from the end
    // p/2 = from the beginning
    return std::min(p/2, (n/2 - p/2));
}
```