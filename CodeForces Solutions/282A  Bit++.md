# 282A	Bit++

https://codeforces.com/problemset/problem/282/A

# Solution

```
#include <bits/stdc++.h>
using namespace std;

void solve(int n){
    int x = 0;
    for(int i = 0; i < n; ++i){
        string s;
        cin >> s;
        if(s.find("++") != string::npos)
            x++;
        else if(s.find("--") != string::npos)
            x--;
    }
    cout << x << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    solve(n);
}

```

