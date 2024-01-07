# 1478 - Matriz Quadrada II

Escreva um algoritmo que leia um inteiro N (0 ≤ N ≤ 100), correspondente a ordem de uma matriz M de inteiros, e construa a matriz de acordo com o exemplo abaixo.

[Matriz Quadrada II - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1478)

# Solução

```
#include <iostream>
#include <iomanip>  // Para std::setw

using namespace std;

void printMatrix(int N) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            // Calcula o valor da célula
            int value = (i >= j) ? i - j + 1 : j - i + 1;

            // Imprime o valor com formatação
            cout << setw(3) << value;
            if (j < N - 1) cout << " ";  // Adiciona espaço entre os números, exceto no final da linha
        }
        cout << endl;
    }
    cout << endl;  // Linha em branco após cada matriz
}

int main() {
    int N;
    while (true) {
        cin >> N;
        if (N == 0) break;

        printMatrix(N);
    }
    return 0;
}
```