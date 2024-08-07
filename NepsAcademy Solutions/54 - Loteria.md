# Loteria

# Solução
```
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> numerosEscolhidos(6);
    vector<int> numerosSorteados(6);

    for (int i = 0; i < 6; i++) {
        cin >> numerosEscolhidos[i];
    }

    for (int i = 0; i < 6; i++) {
        cin >> numerosSorteados[i];
    }

    int acertos = 0;

    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 6; j++) {
            if(numerosEscolhidos[i] == numerosSorteados[j]) {
                acertos++;
            }
        }
    }

    if(acertos == 3) {
        cout << "terno" << endl;
    } else if(acertos == 4) {
        cout << "quadra" << endl;
    } else if(acertos == 5) {
        cout << "quina" << endl;
    } else if(acertos == 6) {
        cout << "sena" << endl;
    } else {
        cout << "azar" << endl;
    }

    return 0;
}


auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
```