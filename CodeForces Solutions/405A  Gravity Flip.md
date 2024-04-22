# 405A	Gravity Flip

https://codeforces.com/problemset/problem/405/A

# Solution

```
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> cubos(n);
    for(int i = 0; i < n; i++)
        cin >> cubos[i];

    sort(cubos.begin(), cubos.end());

    for(int valores : cubos)
        cout << valores << " ";

    return 0;
}

```