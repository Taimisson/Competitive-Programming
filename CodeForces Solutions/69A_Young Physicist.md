# 69A	Young Physicist

https://codeforces.com/problemset/problem/69/A

# Solution

```
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, x, y, z;
    cin >> n;

    int sumX = 0, sumY = 0, sumZ = 0;

    for(int i = 0; i < n; ++i){
        cin >> x >> y >> z;
        sumX += x;
        sumY += y;
        sumZ += z;
    }

    if(sumX == 0 && sumY == 0 && sumZ == 0)
        cout << "YES" << "\n";
    else
        cout << "NO" << "\n";
}
```