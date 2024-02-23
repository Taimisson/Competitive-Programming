# 2653 - Dijkstra

Dijkstra está muito curioso para saber quantos tipos de jóias diferentes seu tesouro possui.

Sabendo que você é o melhor programador do continente Dijkstra te contratou para verificar quantos tipos de jóias distintas ele tem em seu tesouro.

[Dijkstra - Beecrowd](https://judge.beecrowd.com/pt/problems/view/2653)

# Solução

```
#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    set<string> joias;
    string joia;

    // Lê cada linha da entrada até o fim do arquivo
    while (cin >> joia) {
        // Insere a joia no conjunto
        joias.insert(joia);
    }

    // O tamanho do conjunto representa a quantidade de tipos de joias distintas
    cout << joias.size() << endl;

    return 0;
}

```