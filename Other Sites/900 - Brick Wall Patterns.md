# 900 - Brick Wall Patterns

# Solution
```
#include <bits/stdc++.h>

using namespace std;

const int MAX_L = 50;

int main() {
    int n;

    vector<long long> fib(MAX_L + 1, 0);

    fib[1] = 1;
    fib[2] = 2;

    for (int i = 3; i <= MAX_L; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    while(cin >> n && n != 0) {
        cout << fib[n] << endl;
    }

}

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
```