# Caravana

# Solução
```
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, soma = 0;
    cin >> N;

    vector<int> cargas(N);

    for(int i = 0; i < N; i++) {
        cin >> cargas[i];
        soma += cargas[i];
    }

    int total = soma / N;

    for(int carga : cargas) cout << total - carga << endl;

    return 0;
}


auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
```