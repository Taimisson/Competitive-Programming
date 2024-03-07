# 1960 - Numeração Romana para Números de Página

Você deve escrever um programa que, dado um número arábico, mostra seu equivalente na numeração romana.

Lembre que I representa 1, V é 5, X é 10, L é 50, C é 100, D é 500 e M representa 1000.

[Numeração Romana para Números de Página - Beecrowd](https://judge.beecrowd.com/pt/problems/view/1960)

# Solução

```
#include <iostream>
#include <string>

std::string toRoman(int number) {
    std::string romanNumerals[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    std::string result = "";

    for (int i = 0; i < 13; i++) {
        while (number >= values[i]) {
            number -= values[i];
            result += romanNumerals[i];
        }
    }

    return result;
}

int main() {
    int number;
    std::cin >> number; // Recebe o número da entrada

    std::string roman = toRoman(number); // Converte para numeração romana

    std::cout << roman << std::endl; // Exibe o resultado

    return 0;
}

```