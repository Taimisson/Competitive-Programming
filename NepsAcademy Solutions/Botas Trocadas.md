# Botas Trocadas

# Solução
```
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<int, int> paresDireitos;
    unordered_map<int, int> paresEsquerdos;

    for(int i = 0; i < n; i++) {
        int tamanho;
        char pe;
        cin >> tamanho >> pe;

        if(pe == 'D') paresDireitos[tamanho]++;
        else paresEsquerdos[tamanho]++;
    }

    int paresCorretos = 0;

    for(auto par : paresDireitos) {
        paresCorretos += min(par.second, paresEsquerdos[par.first]);
    }

    cout << paresCorretos << endl;

    return 0;
}


auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
```