# 2143 - A Volta do Radar

# Solution
```
#include <bits/stdc++.h>

using namespace std;

void test_case() {
    int n;
    cin >> n;

    if((n - 2) % 2 == 0) cout << 2 * n - 2 << endl;
    else cout << 2 * n - 1 << endl;
}

int main() {
    int t;
    while (cin >> t) {
        if (t == 0) break; // Se t for 0, interrompe a leitura
        while (t--) {       // Para cada caso de teste
            test_case();    // Chama a função para processar o caso
        }
    }
}

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
```