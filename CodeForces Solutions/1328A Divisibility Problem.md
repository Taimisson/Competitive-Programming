# 1328A	Divisibility Problem

https://codeforces.com/problemset/problem/1328/A

# Solution

```
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        int remainder = a % b;
        int moves = remainder == 0 ? 0 : b - remainder;

        cout << moves << endl;
    }

    return 0;
}

```