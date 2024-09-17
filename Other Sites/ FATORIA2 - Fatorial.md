# Fatorial

# Solução - Memoization
```
#include <bits/stdc++.h>

using namespace std;

// memoization
map<int, int> memo;

int fatorial(int n ){
    if(n == 0) return 1;

    if(memo.find(n) != memo.end()) return memo[n];

    return memo[n] = n * fatorial(n - 1);
}

int main() {
    int n;
    cin >> n;

    cout << fatorial(n) << endl;
}

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
```