# Álbum da Copa

# Solução
```
#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, M;
    cin >> N;  // Número total de figurinhas e espaços no álbum
    cin >> M;  // Número de figurinhas já compradas

    vector<bool> coladas(N + 1, false);  // Vetor para marcar figurinhas coladas (indexado de 1 a N)

    for (int i = 0; i < M; ++i) {
        int X;
        cin >> X;
        coladas[X] = true;  // Marca a figurinha como colada
    }

    int figurinhas_faltando = 0;
    for (int i = 1; i <= N; ++i) {
        if (!coladas[i]) {
            ++figurinhas_faltando;  // Conta as figurinhas que ainda não foram coladas
        }
    }

    cout << figurinhas_faltando << endl;  // Imprime o resultado

    return 0;
}

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();

```