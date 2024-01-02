# 1179 - Preenchimento de Vetor IV

Neste problema você deverá ler 15 valores colocá-los em 2 vetores conforme estes valores forem pares ou ímpares. Só que o tamanho de cada um dos dois vetores é de 5 posições. Então, cada vez que um dos dois vetores encher, você deverá imprimir todo o vetor e utilizá-lo novamente para os próximos números que forem lidos. Terminada a leitura, deve-se imprimir o conteúdo que restou em cada um dos dois vetores, imprimindo primeiro os valores do vetor impar. Cada vetor pode ser preenchido tantas vezes quantas for necessário.

[Preenchimento de Vetor IV - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1179)

# Solução

```
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    vector<int> par(5);
    vector<int> impar(5);

    int parIndex = 0, imparIndex = 0;
    for(int i = 0; i < 15; ++i){
        int x;
        cin >> x;

        if(x % 2 == 0){
            par[parIndex] = x;
            parIndex++;

            if(parIndex == 5){
                for(int j = 0; j < 5; ++j)
                    cout << "par[" << j << "] = " << par[j] << "\n";
                parIndex = 0;
            }
        }else{
            impar[imparIndex] = x;
            imparIndex++;

            if(imparIndex == 5){
                for(int j = 0; j < 5; ++j)
                    cout << "impar[" << j << "] = " << impar[j] << "\n";
                imparIndex = 0;
            }
        }
    }

    for(int i = 0; i < imparIndex; ++i){
        cout << "impar[" << i << "] = " << impar[i] << "\n";
    }
    for(int i = 0; i < parIndex; ++i){
        cout << "par[" << i << "] = " << par[i] << "\n";
    }
}
```