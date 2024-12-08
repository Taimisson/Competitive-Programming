# Substituir o Maior em Matriz 3x3

# Solução
```
#include <iostream>
#include <limits.h> // para usar INT_MIN
using namespace std;

int main() {
    int matriz[3][3];
    int maiorValor = INT_MIN;

    // Lê os elementos da matriz e encontra o maior valor
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matriz[i][j];
            if (matriz[i][j] > maiorValor) {
                maiorValor = matriz[i][j];
            }
        }
    }

    // Substitui todas as ocorrências do maior valor por -1
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] == maiorValor) {
                matriz[i][j] = -1;
            }
        }
    }

    // Imprime a matriz resultante
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
```