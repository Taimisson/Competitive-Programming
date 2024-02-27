# 2167 - Falha do Motor

Ao observar a curva de velocidade de um motor, o engenheiro Zé percebeu que sempre ocorria uma queda quando as medidas eram feitas em intervalos de 10 ms. Mas esta queda acontecia em medidas diferentes a cada novo teste do motor.

Zé ficou curioso com essa falta de padrão e quer saber, para cada teste do motor, qual a primeira medida em que ocorre uma queda de velocidade.

[Falha do Motor - Beecrowd](https://judge.beecrowd.com/pt/problems/view/2167)

# Solução

```
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    int atual, anterior;
    int indice = 2;

    cin >> anterior;
    for(int i = 1; i < n; ++i){
        cin >> atual;
        if(atual < anterior){
            cout << indice << endl;
            return 0;
        }
        anterior = atual;            
        indice++;
    }
    cout << 0 << endl;
}

```