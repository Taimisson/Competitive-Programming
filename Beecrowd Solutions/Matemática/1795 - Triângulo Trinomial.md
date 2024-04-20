# 1795 - Triângulo Trinomial

A primeira linha do triângulo trinomial é numerada com zero, a segunda linha é a de número 1 e assim sucessivamente.

Sua tarefa é, dado um número de linha R, escrever um programa que exiba a soma de seus elementos. Por exemplo, a soma dos elementos da linha 2 é 9 = 1 + 2 + 3 + 2 + 1.

[Triângulo Trinomial - Beecrowd](https://judge.beecrowd.com/pt/problems/view/1795)

# Solução

```
#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double n;
    std::cin >> n; // Read the input number n

    // Calculate 3^n and print it with no decimal places
    std::cout << std::fixed << std::setprecision(0) << std::pow(3, n) << std::endl;

    return 0;
}

```