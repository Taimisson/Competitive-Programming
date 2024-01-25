# 1827 - Matriz Quadrada IV

Neste programa seu trabalho é ler um valor inteiro que será o tamanho da matriz quadrada (largura e altura) que será preenchida da seguinte forma: a parte externa é preenchida com 0, a parte interna é preenchida com 1, a diagonal principal é preenchida com 2, a diagonal secundária é preenchida com 3 e o ponto central contém o valor 4, conforme os exemplos abaixo.

Obs: o quadrado com '1' sempre começa na posição tamanho/3, tanto na largura quanto quanto na altura. A linha e a coluna começam em zero (0).

# Solução

```
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;

    while (cin >> N) {
        vector<vector<int>> matriz(N, vector<int>(N, 0));
        int innerStart = N / 3;
        int innerEnd = N - innerStart;

        // Preenchendo a matriz
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                // Preenchendo diagonais
                if (i == j) matriz[i][j] = 2;
                if (i + j == N - 1) matriz[i][j] = 3;

                // Preenchendo a parte interna
                if (i >= innerStart && i < innerEnd && j >= innerStart && j < innerEnd) {
                    matriz[i][j] = 1;
                }

                // Preenchendo o ponto central
                if (i == N / 2 && j == N / 2) matriz[i][j] = 4;
            }
        }

        // Imprimindo a matriz
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cout << matriz[i][j];
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
```