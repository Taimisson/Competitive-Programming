# Xadrez

# Solução
```
#include <bits/stdc++.h>

using namespace std;

int main() {
    int L, C;
    cin >> L >> C;

    if (L % 2 != 0 && C % 2 != 0) cout << "1" << endl;
    else if (L % 2 == 0 && C % 2 == 0) cout << "1" << endl;
    else cout << "0" << endl;
}

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
```