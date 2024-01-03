# 1182 - Coluna na Matriz

Neste problema você deve ler um número que indica uma coluna de uma matriz na qual uma operação deve ser realizada, um caractere maiúsculo, indicando a operação que será realizada, e todos os elementos de uma matriz M[12][12]. Em seguida, calcule e mostre a soma ou a média dos elementos que estão na área verde da matriz, conforme for o caso. A imagem abaixo ilustra o caso da entrada do valor 5 para a coluna da matriz, demonstrando os elementos que deverão ser considerados na operação.

[Coluna na Matriz - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1182)

# Solução

```
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    vector<vector<float>> matriz(12, vector<float>(12));

    int coluna;
    char oper;
    cin >> coluna >> oper;

    for(int i = 0; i < 12; ++i)
        for(int j = 0; j < 12; ++j)
            cin >> matriz[i][j];

    float resultado = 0.0;
    for(int i = 0; i < 12; ++i)
        resultado += matriz[i][coluna];

    if(oper == 'M')
        resultado /= 12.0;

    cout << fixed << setprecision(1) << resultado << endl;

}
```