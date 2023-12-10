# 1011 - Esfera

Faça um programa que calcule e mostre o volume de uma esfera sendo fornecido o valor de seu raio (R). A fórmula para calcular o volume é: (4/3) * pi * R3. Considere (atribua) para pi o valor 3.14159.

Dica: Ao utilizar a fórmula, procure usar (4/3.0) ou (4.0/3), pois algumas linguagens (dentre elas o C++), assumem que o resultado da divisão entre dois inteiros é outro inteiro.

[Esfera - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1011)

# Solução

```
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double raio;

    cin >> raio;

    double volume = (4.0/3) * 3.14159 * (raio * raio * raio);

    cout << fixed << setprecision(3);
    cout << "VOLUME = " << volume << endl; // missed endl

    return 0;
}
```