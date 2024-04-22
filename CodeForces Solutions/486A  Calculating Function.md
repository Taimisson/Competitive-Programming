# 486A	Calculating Function

https://codeforces.com/problemset/problem/486/A

# Solution

```
#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll calcular_funcao(ll n) {
    return (n % 2 == 0) ?  n / 2 : -(n + 1) / 2;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n;
    cin >> n;

    cout << calcular_funcao(n) << "\n";
}
```