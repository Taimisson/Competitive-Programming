# 158B	Taxi

https://codeforces.com/problemset/problem/158/B

# Solution

```
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, s;
    cin >> n;

    int count[5] = {0}; // Inicializa a contagem de grupos de cada tamanho (1 a 4)

    for(int i = 0; i < n; i++) {
        cin >> s; // Lê o tamanho de cada grupo
        count[s]++; // Incrementa a contagem para o tamanho de grupo correspondente
    }

    int total = 0; // Inicializa o contador de táxis

    // Adiciona um táxi para cada grupo de 4, pois eles preenchem um táxi completamente
    total += count[4];

    // Adiciona um táxi para cada grupo de 3. Cada grupo de 3 pode potencialmente levar um grupo de 1 junto
    total += count[3];

    // Combina grupos de 2. Dois grupos de 2 podem compartilhar um táxi
    total += count[2] / 2;

    // Se há um grupo de 2 sobrando, adiciona um táxi para ele e reduz a contagem de grupos de 1, se houver
    if (count[2] % 2 == 1) {
        total++; // Adiciona um táxi para o grupo de 2 sobrando
        count[1] = max(0, count[1] - 2); // Tenta combinar com dois grupos de 1, se disponível
    }

    // Reduz a contagem de grupos de 1 pelo número de grupos de 3, já que eles podem compartilhar táxis
    count[1] = max(0, count[1] - count[3]);

    // Se ainda houver grupos de 1, eles podem compartilhar táxis, com até 4 em cada
    if (count[1] > 0) {
        total += (count[1] + 3) / 4; // Divide por 4, arredondando para cima
    }

    // Imprime o número total de táxis necessários
    cout << total << endl;

    return 0;
}

```