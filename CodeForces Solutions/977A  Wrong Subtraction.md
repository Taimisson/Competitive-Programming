# 977A	Wrong Subtraction

https://codeforces.com/problemset/problem/977/A

# Solution

```
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    long n, k;
    cin >> n >> k;
    
    while(k--){
        if(n % 10 == 0)
            n /= 10;
        else
            n -= 1;
    }
    cout << n << "\n";
}
```