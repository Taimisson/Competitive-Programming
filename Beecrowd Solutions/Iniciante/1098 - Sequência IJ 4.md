# Sequência IJ 4

Você deve fazer um programa que apresente a sequencia conforme o exemplo abaixo.

I=0 J=1
I=0 J=2
I=0 J=3
I=0.2 J=1.2
I=0.2 J=2.2
I=0.2 J=3.2
.....
I=2 J=?
I=2 J=?
I=2 J=?

[Sequencia IJ 4 - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1098)



# Solução
```
#include <iostream>
#include <cmath> // Para usar a função floor

using namespace std;

int main() {
    double i, j;

    for(i = 0; i <= 2.01; i += 0.2) {
        for(j = 1; j <= 3; j++) {
            // Arredonda i para uma casa decimal
            double i_rounded = floor(i * 10 + 0.5) / 10;

            // Verifica se i arredondado é um número inteiro
            if (i_rounded == floor(i_rounded)) {
                cout << "I=" << int(i_rounded) << " ";
            } else {
                cout << "I=" << i_rounded << " ";
            }

            // Verifica se i + j é um número inteiro
            if (i_rounded + j == floor(i_rounded + j)) {
                cout << "J=" << int(i_rounded + j) << "\n";
            } else {
                cout << "J=" << i_rounded + j << "\n";
            }
        }
    }

    return 0;
}
```