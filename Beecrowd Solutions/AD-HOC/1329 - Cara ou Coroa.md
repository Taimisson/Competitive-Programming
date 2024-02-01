# 1329 - Cara ou Coroa

Ontem Maria contou a João que ela guarda um registro de todas as vezes que eles jogaram, desde os tempos da creche. João ficou espantado. Porém João está estudando Ciência da Computação e decidiu que essa era uma boa oportunidade para mostrar a Maria suas habilidades em programação, escrevendo um programa que mostrasse o número de vezes que cada um deles venceu ao longo de todos esses anos.

[Cara ou Coroa - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1329)

# Solução

```
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    while(true){
        int x, maria = 0, joao = 0;
        cin >> n;

        if(n == 0) break;

        for(int i = 0; i < n; ++i){
            cin >> x;

            if(x == 0) maria++;
            else joao++;
        }

        cout << "Mary won " << maria << " times and John won " << joao << " times" << "\n";
    }
}
```