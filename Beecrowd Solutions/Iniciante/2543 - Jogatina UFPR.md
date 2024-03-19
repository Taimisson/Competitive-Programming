# 2543 - Jogatina UFPR

A página publica muitos vídeos diariamente. Por isso, pode ser dificil encontrar e contar todos os seus vídeos na página. Entretanto, como você também é programador, você decidiu escrever um programa para auxiliá-lo nesta tarefa. Dada a lista de gameplays publicados na página, determine quantos gameplays seus de Contra-Strike foram publicados.

[Jogatina UFPR - Beecrowd](https://judge.beecrowd.com/pt/problems/view/2543)

# Solução

```
#include <iostream>
using namespace std;

int main() {
    int N, I; // Número de gameplays e identificador do usuário

    // Lê os casos de teste até o fim do arquivo
    while (cin >> N >> I) {
        int count = 0; // Contador de gameplays de Contra-Strike do usuário

        for (int i = 0; i < N; i++) {
            int id, game; // Identificador do autor e jogo (0 para Contra-Strike, 1 para Liga of Legendas)
            cin >> id >> game;

            // Se o gameplay é do usuário e é de Contra-Strike, incrementa o contador
            if (id == I && game == 0) {
                count++;
            }
        }

        // Imprime o número de gameplays de Contra-Strike do usuário
        cout << count << endl;
    }

    return 0;
}
```
