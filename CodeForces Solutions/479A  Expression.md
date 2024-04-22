# 479A Expression

https://codeforces.com/problemset/problem/479/A

# Solution

```
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a, b, c;
    cin >> a >> b >> c;

    int max_value = a + b + c; // Initialize with the simplest expression

    // Compare and find the maximum value
    max_value = max(max_value, a * b * c);
    max_value = max(max_value, (a + b) * c);
    max_value = max(max_value, a * (b + c));
    max_value = max(max_value, a + b * c);
    max_value = max(max_value, a * b + c);

    cout << max_value << endl;

    return 0;
}

```

