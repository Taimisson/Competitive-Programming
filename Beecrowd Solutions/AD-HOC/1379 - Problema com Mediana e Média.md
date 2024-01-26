# 1379 - Problema com Mediana e Média

A média de três inteiros A, B e C é (A + B + C)/3. A mediana de três números inteiros seria então aquela que estaria no meio, se forem ordenados em ordem não decrescente. Dados dois números inteiros A e B, retornar o mínimo inteiro possível C, tal que a média e a mediana de A, B e C, sejam iguais.

[Problema com Mediana e Média - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1379)

# Solução

```
#include <iostream>
#define ll long long
using namespace std;

int main() {
    long long A, B;
    while (cin >> A >> B) {
        if (A == 0 && B == 0) break;
        ll C = 2 * A - B;
        cout << C << endl;
    }
    return 0;
}

```