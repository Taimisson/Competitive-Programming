# Pulo do Sapo

# Solução
```
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> pedras(N + 1, 0);

    for(int i = 0; i < M; ++i){
        int posicao, distancia;
        cin >> posicao >> distancia;

        pedras[posicao] = 1;

        for(int j = posicao + distancia; j <= N; j += distancia) pedras[j] = 1;

        for(int j = posicao - distancia; j >= 1; j -= distancia) pedras[j] = 1;

    }

    for(int i = 1; i <= N; ++i) cout << pedras[i] << endl;

    return 0;
}


auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
```