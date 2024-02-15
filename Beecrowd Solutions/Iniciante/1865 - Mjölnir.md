# 1865 - Mjölnir

Escreva um programa que, dado um nome, e a força, em Newtons, aplicado ao tentar levantar o Mjölnir, informar se a pessoa conseguiu ou não levantá-lo.

[Mjölnir - Beecrowd](https://judge.beecrowd.com/pt/problems/view/1865)

# Solução

```
#include <iostream>
#include <string>

using namespace std;

int main() {
    int C;
    cin >> C; // Lendo a quantidade de casos de teste

    for(int i = 0; i < C; i++) {
        string nome;
        int forca;
        cin >> nome >> forca; // Lendo o nome e a força aplicada

        if(nome == "Thor") cout << "Y" << endl; // Thor consegue levantar
        else cout << "N" << endl; // Outros não conseguem levantar
    }

    return 0;
}

```