# 2510 - Batmain

Você trabalha para a polícia de Codham, em um reconhecido cargo de batprogramador (profissão responsável por resolver problemas que envolvem o cavaleiro das trevas, realizando a codificação de algoritmos) e lhe foi solicitado a seguinte tarefa: dizer, para cada vilão, se ele alguma vez já foi capturado pelo cavaleiro das trevas.

[Batmain - Beecrowd](https://judge.beecrowd.com/pt/problems/view/2510)

# Solução

```
#include <iostream>
#include <string>

int main() {
    int T;
    std::string vilao;

    std::cin >> T; // Lê o número de casos de teste
    std::cin.ignore(); // Ignora o \n após o número inteiro

    while (T--) {
        std::getline(std::cin, vilao); // Lê o nome do vilão
        std::cout << "Y\n"; // Imprime Y, indicando que o vilão já foi capturado
    }

    return 0;
}

```