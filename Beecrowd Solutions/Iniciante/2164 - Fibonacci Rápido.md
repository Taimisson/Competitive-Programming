# 2164 - Fibonacci Rápido

Sua tarefa é, dado um natural n, calcular o valor de Fibonacci(n) usando a fórmula acima.

[Fibonacci Rápido - Beecrowd](https://judge.beecrowd.com/pt/problems/view/2164)

# Solução

```
#include <iostream>
#include <cmath>

using namespace std;

double fibonacci(int n) {
    double sqrt_5 = sqrt(5);
    double phi = (1 + sqrt_5) / 2;
    double psi = (1 - sqrt_5) / 2;
    
    return (pow(phi, n) - pow(psi, n)) / sqrt_5;
}

int main() {
    int n;
    cin >> n;

    double result = fibonacci(n);
    cout << fixed;
    cout.precision(1);
    cout << result << endl;

    return 0;
}
```