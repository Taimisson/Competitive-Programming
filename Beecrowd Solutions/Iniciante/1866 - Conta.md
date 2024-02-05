# 1866 - Conta

Dois amigos pedem ao atendente de uma lanchonete propor um desafio, de modo que quem acertasse mais, não precisaria pagar a conta. Então foi proposto o seguinte: Dado o seguinte somatório abaixo, informar o resultado, com uma quantidade de termos no mesmo:

S = 1 - 1 + 1 - 1 + 1 - 1 + 1 - 1 ...

Escreva um programa que, dada uma quantidade de termos, informar o resultado do somatório acima.

[Conta - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1866)

# Solução

```
#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        if(x % 2 == 0)
            cout << 0 << "\n";
        else
            cout << 1 << "\n";
    }
    
    return 0;
}
```