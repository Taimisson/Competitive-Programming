# 1029 - Fibonacci, Quantas Chamadas?

# Solução
```
#include <bits/stdc++.h>

using namespace std;


int fib(int n, int& calls){
    calls++;
    if(n == 0) return 0;
    if(n == 1) return 1;

    return fib(n-1, calls) + fib(n-2, calls);
}

int main() {
    int n;
    cin >> n;

    while(n--){
        int x;
        cin >> x;

        int calls = -1;
        int result = fib(x, calls);

        cout << "fib(" << x << ") = " << calls << " calls = " << result << endl;
    }
}

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
```