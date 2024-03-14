# 2161 - Raiz Quadrada de 10

Por exemplo, ao repetir 2 vezes a fração continuada para calcular a raiz quadrada de 10, temos a fórmula abaixo.
Sua tarefa é, dado o número N de repetições, calcular o valor aproximado da raiz quadrada de 10.

[Raiz Quadrada de 10 - Beecrowd](https://judge.beecrowd.com/pt/problems/view/2161)

# Solução

```
#include <iostream>
#include <iomanip> // Para setprecision
#include <cstdlib> // Para atof
using namespace std;

int main() {
    double N;
    cin >> N;
    double x = 0.0;
    for (int i = 0; i < N; i++) {
        x += 6.0;
        x = (1.0 / x);
    }
    x += 3.0;
    cout << fixed << setprecision(10) << x << endl;
    return 0;
}

```