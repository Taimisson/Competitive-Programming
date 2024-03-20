# 2483 - Feliz Nataaal!

Você fica tão feliz no natal que tem vontade de gritar para todo mundo: "Feliz natal!!". Pra colocar toda essa felicidade pra fora, você montou um programa que, colocado um índice I de felicidade, seu grito de natal é mais animado.

[Feliz Nataaal! - Beecrowd](https://judge.beecrowd.com/pt/problems/view/2483)

# Solução

```
#include <iostream>
#include <string>

using namespace std;

int main() {
    int I;
    cin >> I; // Lê o índice de felicidade

    string saudacao = "Feliz nat"; // Parte inicial da saudação
    for(int i = 0; i < I; i++) {
        saudacao += 'a'; // Adiciona 'a's conforme o índice de felicidade
    }
    saudacao += "l!"; // Completa a saudação

    cout << saudacao << endl; // Imprime a saudação

    return 0;
}

```