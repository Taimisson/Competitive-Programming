# 2028 - Sequência de Sequência

Sua tarefa é fazer um algoritmo que dado um número inteiro N, tenha como resposta a quantidade total de números dessa sequência e logo abaixo a sequência completa.

[Sequência de Sequência - Beecrow](https://judge.beecrowd.com/pt/problems/view/2028)

# Solução

```
#include <iostream>
using namespace std;

int main() {
    int N, caso = 1;

    while (cin >> N) {
        int totalNumeros = 1; // Conta o número 0
        for (int i = 1; i <= N; i++) {
            totalNumeros += i; // Soma a quantidade de números até N
        }

        // Exibe a quantidade de números na sequência
        cout << "Caso " << caso++ << ": " << totalNumeros << " numero";
        if (totalNumeros > 1) cout << "s";
        cout << endl;

        // Exibe a sequência
        cout << "0"; // Inicialmente imprime o 0
        for (int i = 1; i <= N; i++) {
            for (int j = 0; j < i; j++) {
                cout << " " << i; // Espaço antes de cada número, exceto o primeiro
            }
        }
        cout << "\n\n"; // Duas quebras de linha após cada caso
    }

    return 0;
}

```