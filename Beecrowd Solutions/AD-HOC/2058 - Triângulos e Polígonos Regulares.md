# 2058 - Triângulos e Polígonos Regulares

O professor Rafael pediu para você calcular qual o número mínimo de triângulos necessários para compor um polígono regular de N lados.

[Triângulos e Polígonos Regulares - Beecrowd](https://judge.beecrowd.com/pt/problems/view/2058)

# Solução

```
#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    // O número mínimo de triângulos é N - 2
    int numeroMinimoTriangulos = N - 2;

    cout << numeroMinimoTriangulos << endl;

    return 0;
}
```