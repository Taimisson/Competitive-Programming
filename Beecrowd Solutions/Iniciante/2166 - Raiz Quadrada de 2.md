# 2166 - Raiz Quadrada de 2

Sua tarefa é, dado o número N de repetições, calcular o valor aproximado da raiz quadrada de 2.

[Raiz Quadrada de 2](https://judge.beecrowd.com/pt/problems/view/2166)

# Solução

```
#include <iostream>
#include <iomanip> // para usar std::setprecision

using namespace std;

double sqrt2(int N) {
    double result = 0.0;

    // Calcula a fração continuada de trás para frente
    for (int i = 0; i < N; ++i) {
        result = 1.0 / (2.0 + result);
    }

    // Adiciona 1 ao resultado final
    result += 1.0;

    return result;
}

int main() {
    int N;
    cin >> N; // Lê o número de repetições

    // Define a precisão do ponto flutuante para 10 casas decimais
    cout << fixed << setprecision(10);

    // Calcula e exibe a raiz quadrada de 2
    cout << sqrt2(N) << endl;

    return 0;
}
```
