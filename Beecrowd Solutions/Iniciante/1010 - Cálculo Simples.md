# 1010 - Cálculo Simples

Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, o valor unitário de cada peça 1, o código de uma peça 2, o número de peças 2 e o valor unitário de cada peça 2. Após, calcule e mostre o valor a ser pago.

[Cálculo Simples - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1010)

# Solução

```
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int cod1, qntd1, cod2, qntd2;
    double valor1, valor2;

    cin >> cod1 >> qntd1 >> valor1;
    cin >> cod2 >> qntd2 >> valor2;

    double total = qntd1 * valor1 + qntd2 * valor2;

    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << total << endl;

    return 0;
}

```