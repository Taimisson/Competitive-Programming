# 1070 - Seis Números Ímpares

Leia um valor inteiro X. Em seguida apresente os 6 valores ímpares consecutivos a partir de X, um valor por linha, inclusive o X ser for o caso.

[Seis Números Ímpares - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1070)

# Solução
```
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x;
    cin >> x;

    // Se x for par, comece do próximo ímpar. Caso contrário, comece de x.
    if(x % 2 == 0) {
        x++;
    }

    for(int i = 0; i < 6; i++) {
        cout << x << endl;
        x += 2;
    }
    
    return 0;
}
```