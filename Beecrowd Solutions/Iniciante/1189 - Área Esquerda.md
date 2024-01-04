# 1189 - Área Esquerda

Leia um caractere maiúsculo, que indica uma operação que deve ser realizada e uma matriz M[12][12]. Em seguida, calcule e mostre a soma ou a média considerando somente aqueles elementos que estão na área esquerda da matriz, conforme ilustrado abaixo (área verde).

[Área Esquerda - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1189)

# Solução

```
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    vector<vector<double>> matriz(12, vector<double>(12));

    char oper;
    cin >> oper;

    // Lendo os elementos da matriz
    for(int i = 0; i < 12; ++i)
        for(int j = 0; j < 12; ++j)
            cin >> matriz[i][j];

    double  resultado = 0.0;
    int cont = 0;
    
    for(int i = 1; i <= 10; ++i) {
        for(int j = 0; j <= 4; ++j) {
            if ((i < 6 && j < i) || (i >= 6 && j < 11 - i)) {
                resultado += matriz[i][j];
                cont++;
            }
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