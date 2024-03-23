# 2786 - Piso da Escola

Está muito claro que sempre serão necessárias 4 lajotas do tipo 3 para os cantos da sala. A tarefa que a diretora passou para os alunos é calcular o número de lajotas dos tipos 1 e 2 que serão necessárias. Na figura, para L = 3 e C = 5, foram necessárias 23 do tipo 1 e 12 do tipo 2. Seu programa precisa computar, dados os valores de L e C, a quantidade de lajotas do tipo 1 e do tipo 2 necessárias.

[Piso da Escola - Beecrowd](https://judge.beecrowd.com/pt/problems/view/2786)

# Solução

```
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    // input: 3 e 5
    int largura, comprimento;
    cin >> largura >> comprimento;

    int tipo1 = largura * comprimento + (comprimento - 1) * (largura - 1);
    int tipo2 = (largura - 1) * 2 + (comprimento - 1) * 2;
    cout << tipo1 << "\n" << tipo2 << "\n";

    return 0;
}
```
