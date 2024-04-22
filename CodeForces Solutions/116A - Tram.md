# 116A	Tram

https://codeforces.com/problemset/problem/116/A

# Solution

```
#include <bits/stdc++.h>
using namespace std;

void solve(int n){
    int min = 0, total = 0;
    int a, b;
    for(int i = 0; i < n; ++i){
        cin >> a >> b;
        total+= b-a;
        if(total > min){
            min = total;
        }
    }
    cout << min << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    solve(n);
}
```