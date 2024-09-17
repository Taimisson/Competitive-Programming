# ACOES1MG - Investindo no mercado de açőes 1

# Solução
```
#include <bits/stdc++.h>

using namespace std;

int investimento(int n, int k, map<int, int> &memo) {
    if(n <= k) return 1;

    if(memo.count(n)) return memo[n];

    int left = investimento(n / 2, k, memo);
    int right = investimento(n - n / 2, k, memo);
    memo[n] = left + right;
    return memo[n];
}

int main() {
    int n, k;

    while(cin >> n >> k) {
        if (n == 0 && k == 0) {
            break;
        }

        map<int, int> memo;
        int result = investimento(n, k, memo);
        cout << result << endl;
    }
}

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();

```