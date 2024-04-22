# 136A	Presents

https://codeforces.com/problemset/problem/136/A

# Solution

```
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    int p[n+1], resultado[n+1];

    for(int i = 1; i <= n; ++i){
        cin >> p[i];
        resultado[p[i]] = i;
    }

    for(int i = 1; i <= n; ++i)
        cout << resultado[i] << " ";
    cout << "\n";
}
```
