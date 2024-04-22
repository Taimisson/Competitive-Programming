# 318A	Even Odds

https://codeforces.com/problemset/problem/318/A

# Solution

```
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n, k;
    cin >> n >> k;

    ll answer;
    if (k <= (n + 1) / 2) {
        answer = 2 * k - 1;
    } else {
        k -= (n + 1) / 2;
        answer = 2 * k;
    }

    cout << answer << endl;
}

```