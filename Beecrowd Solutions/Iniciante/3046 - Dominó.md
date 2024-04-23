# 3046 - Dominó

Para a nossa sorte, existe uma fórmula com a qual podemos calcular facilmente o número de peças de um jogo do tipo duplo-N, para um número N natural qualquer: ((N+1)*(N+2))/2. Neste problema, estamos precisando da sua ajuda para escrever um programa que, dado o valor N, use esta fórmula para calcular e imprimir quantas peças existem num jogo de dominó do tipo duplo-N.

[Dominó - Beecrowd](https://judge.beecrowd.com/pt/problems/view/3046)

# Solução

```
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    cout << ((N + 1 ) * (N + 2)) / 2 << endl;

    return 0;
}
```
