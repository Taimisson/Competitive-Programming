# 2987 - Balão de Honra

Dada uma letra do alfabeto, informe qual a sua posição.

[Balão de Honra - Beecrowd](https://judge.beecrowd.com/pt/problems/view/2987)

# Solução

```
#include <iostream>

int main() {
    char letra;
    std::cin >> letra; // Lê a letra do alfabeto

    // Calcula a posição subtraindo o valor de 'A' e adicionando 1
    int posicao = letra - 'A' + 1;

    std::cout << posicao << std::endl; // Exibe a posição

    return 0;
}
```
