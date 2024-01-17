# 2339 - Aviões de Papel

Você deve escrever um programa que, dados o número de competidores, o número de folhas de papel especial compradas pela Diretora e o número de folhas que cada competidor deve receber, determine se o número de folhas comprado pela Diretora é suficiente.

[Aviões de Papel - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/2339)

# Solução

```
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int c, p, f;
    cin >> c >> p >> f;
    
    if(c * f <= p)
        cout << "S" << "\n";
    else
        cout << "N" << "\n";
}
```