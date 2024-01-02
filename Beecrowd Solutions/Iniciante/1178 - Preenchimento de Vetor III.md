# 1178 - Preenchimento de Vetor III

Leia um valor X. Coloque este valor na primeira posição de um vetor N[100]. Em cada posição subsequente de N (1 até 99), coloque a metade do valor armazenado na posição anterior, conforme o exemplo abaixo. Imprima o vetor N.

[Preenchimento de Vetor III - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1178)

# Solução

```
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    vector<double> n(100);
    cin >> n[0];

    cout << fixed << setprecision(4);

    for(int i = 0; i < 100; ++i){
        if(i > 0)
            n[i] = n[i - 1] / 2.0;
        cout << "N[" << i << "] = " << n[i] << "\n";
    }
}
```