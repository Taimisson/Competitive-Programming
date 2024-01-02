# 1177 - Preenchimento de Vetor II

Faça um programa que leia um valor T e preencha um vetor N[1000] com a sequência de valores de 0 até T-1 repetidas vezes, conforme exemplo abaixo. Imprima o vetor N.

[Preenchimento de Vetor II - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1177)

# Solução

```
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    vector<int> n(1000);

    int t, j = 0;
    cin >> t;
    for(int i = 0; i < 1000; ++i){
        n[i] = j;
        j++;
        if(j == t)
            j = 0;
        cout << "N[" << i << "] = " << n[i] << "\n";
    }
}
```
