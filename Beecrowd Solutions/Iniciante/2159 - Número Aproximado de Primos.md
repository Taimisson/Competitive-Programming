# 2159 - Número Aproximado de Primos

Schoenfeld e Rosser publicaram em 1962 um artigo descrevendo um valor mínimo e máximo para a quantidade de números primos até n, para n ≥ 17. Esta quantidade é representada pela função (n) e a fórmula é mostrada abaixo.

Sua tarefa é, dado um natural n, calcular o mínimo e máximo do intervalo para o número aproximado de primos até n.

[Número Aproximado de Primos - Beecrowd](https://judge.beecrowd.com/pt/problems/view/2159)

# Solução

```
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    // Variável para armazenar o número n
    long long n;
    cin >> n;

    // Cálculo das aproximações de número de primos até n
    double P = n / log(n);
    double M = 1.25506 * (n / log(n));

    // Configuração para imprimir com uma casa decimal
    cout << fixed << setprecision(1);

    // Impressão dos resultados
    cout << P << " " << M << endl;

    return 0;
}
```