# 2234 - Cachorros-Quentes

Você pode ajudá-los? Eles prometeram pagá-lo com um dos seus saborosos cachorros-quentes. Dados o número total de cachorros-quentes consumidos e o número total de participantes na competição, você deve escrever um programa para determinar o número médio de cachorros-quentes consumidos pelos participantes.

[Cachorros-Quentes - Beecrowd](https://judge.beecrowd.com/pt/problems/view/2234)

# Solução

```
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    double h, p;
    cin >> h >> p;

    double divisao = h / p;
    cout << fixed << setprecision(2);
    cout << divisao << endl;

    return 0;
}

```