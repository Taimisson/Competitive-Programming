# 2147 - Galopeira

Escreva um programa que, dada uma palavra digitada, informe quanto tempo foi gasto para ser digitada.

[Galopeira - Beecrowd](https://judge.beecrowd.com/pt/problems/view/2147)

# Solução

```
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int C;
    cin >> C;

    // Processar cada caso de teste
    for(int i = 0; i < C; ++i) {
        string palavra;
        cin >> palavra;

        // O tempo gasto é o comprimento da palavra vezes 0.01
        double tempo = palavra.length() * 0.01;

        // Imprimir o tempo com duas casas decimais
        cout << fixed << setprecision(2) << tempo << endl;
    }

    return 0;
}

```