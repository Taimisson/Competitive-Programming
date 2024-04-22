## Functions

https://www.hackerrank.com/challenges/c-tutorial-functions/problem?isFullScreen=true

# Solution
```
int max_of_four(int a, int b, int c, int d) {
    
    int e {max(a, b)};
    int f {max (c, d)};
    return max(e, f);
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
```