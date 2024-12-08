# Potências Simples

# Solution
```
#include <bits/stdc++.h>

using namespace std;

int main() {
    double x, y;
    cin >> x >> y;

    cout << setprecision(4) << fixed << pow(x,y) << endl;
}

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
```