# 3048 - Sequência Secreta

Neste problema, dada a sequência original de números desenhados no chão da calçada, seu programa deve computar e imprimir a quantidade máxima de números da sequência que poderiam ser marcados com um círculo sem que haja dois números iguais consecutivos na sequência marcada.

[Sequência Secreta - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/3048)

# Solução

```
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    int anterior, atual, contador = 1;
    cin >> anterior;
    for(int i = 1; i < n; ++i){
        cin >> atual;
        if(anterior != atual){
            contador++;
        }
        anterior = atual;
    }
    cout << contador << "\n";
}
```