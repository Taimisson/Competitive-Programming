# 1335A	Candies and Two Sisters

https://codeforces.com/problemset/problem/1335/A
 
# Solution
```
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        // Aplicando a fórmula
        cout << (n % 2 == 0 ? (n / 2 - 1) : (n - 1) / 2) << endl;
    }

    return 0;
}

```