# 1848 - Corvo Contador

Cada piscada do corvo comunica um número em binário. Um olho aberto significa 1 e um olho fechado significa 0. O olho da esquerda é o mais significativo e o da direita é o menos significativo. A cada piscada, este número deve ser somado, e quando o corvo grita, essa soma é um resultado.

[Corvo Contador - Beecrowd](https://judge.beecrowd.com/pt/problems/view/1848)

# Solução
```
#include <iostream>
#include <string>

using namespace std;

int main() {
    string line;
    int sum = 0;
    int countScreams = 0;

    while (countScreams < 3) {
        getline(cin, line);
        
        // Verifica se a linha é um grito do corvo
        if (line == "caw caw") {
            cout << sum << endl; // Imprime o resultado acumulado
            sum = 0; // Reseta a soma para o próximo número
            countScreams++; // Conta o número de gritos
        } else {
            // Converte a piscada para um número binário e adiciona à soma
            int num = 0;
            if (line[0] == '*') num += 4;
            if (line[1] == '*') num += 2;
            if (line[2] == '*') num += 1;
            sum += num;
        }
    }

    return 0;
}

```