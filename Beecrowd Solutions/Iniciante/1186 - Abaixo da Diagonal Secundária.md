# 1186 - Abaixo da Diagonal Secundária

Leia um caractere maiúsculo, que indica uma operação que deve ser realizada e uma matriz M[12][12]. Em seguida, calcule e mostre a soma ou a média considerando somente aqueles elementos que estão abaixo da diagonal Secundária da matriz, conforme ilustrado abaixo (área verde).

[Abaixo da Diagonal Secundária - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1186)

# Solução

```
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    vector<vector<float>> matriz(12, vector<float>(12));

    char oper;
    cin >> oper;

    // Lendo os elementos da matriz
    for(int i = 0; i < 12; ++i)
        for(int j = 0; j < 12; ++j)
            cin >> matriz[i][j];

    float resultado = 0.0;
    int cont = 0;
    
    for(int i = 0; i < 12; ++i) {
        for(int j = 11 - i + 1; j < 12; ++j) {
            resultado += matriz[i][j];
            cont++;
        }
    }

    // Se a operação for Média, divide pelo contador
    if(oper == 'M') {
        resultado /= cont;
    }

    // Imprimindo o resultado com uma casa decimal
    cout << fixed << setprecision(1) << resultado << endl;

    return 0;
}
```