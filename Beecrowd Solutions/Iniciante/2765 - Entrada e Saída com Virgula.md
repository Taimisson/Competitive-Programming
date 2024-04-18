# 2765 - Entrada e Saída com Virgula

O seu professor gostaria de fazer um programa com as seguintes características:

Leia uma frase que vai ter uma virgula no meio do texto;
Imprima a primeira parte da frase;
Imprima a segunda parte da frase.

[Entrada e Saída com Virgula - Beecrowd](https://judge.beecrowd.com/pt/problems/view/2765)

# Solution

```
#include <iostream>
#include <string>

int main() {
    std::string input;

    // Read lines continuously until end of input
    while (getline(std::cin, input)) {
        size_t commaPos = input.find(',');  // Find the position of the comma in the string

        // Print the part of the string before the comma
        std::cout << input.substr(0, commaPos) << std::endl;

        // Print the part of the string after the comma
        // +1 to skip the comma itself
        std::cout << input.substr(commaPos + 1) << std::endl;
    }

    return 0;
}

```