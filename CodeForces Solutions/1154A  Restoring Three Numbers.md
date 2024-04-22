# 1154A - Restoring Three Numbers

https://codeforces.com/problemset/problem/1154/A

# Solution

```
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x[4];
    for (int i = 0; i < 4; ++i) {
        cin >> x[i];
    }

    sort(x, x + 4);

    int a, b, c;
    c = x[3] - x[0];
    a = x[1] - c;
    b = x[2] - c;

    cout << a << " " << b << " " << c << endl;

    return 0;
}

```