# Média Inteira Ponderada

# Solution
```
#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    cout << a * 0.4 + b * 0.6  << endl;
}

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
```