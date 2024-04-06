# 2783 - Figurinhas da Copa

Para ajudar os usuários, a empresa responsável pela venda do álbum e das figurinhas quer criar um aplicativo que permita gerenciar facilmente as figurinhas que faltam para completar o álbum.

Dados o número total de espaços e figurinhas do álbum (N), a lista das figurinhas carimbadas e uma lista das figurinhas já compradas (que pode conter figurinhas repetidas), sua tarefa é determinar quantas figurinhas carimbadas faltam para completar o álbum.

[Figurinhas da Copa - Beecrowd](https://judge.beecrowd.com/pt/problems/view/2783)

# Solução

```
#include <iostream>
#include <set>

using namespace std;

int main() {
    int N, C, M, x;
    cin >> N >> C >> M;

    // Cria um conjunto para armazenar as figurinhas carimbadas
    set<int> carimbadas;

    // Lê as figurinhas carimbadas e as insere no conjunto
    for(int i = 0; i < C; i++) {
        cin >> x;
        carimbadas.insert(x);
    }

    // Lê as figurinhas já compradas
    for(int i = 0; i < M; i++) {
        cin >> x;
        // Se a figurinha comprada é carimbada, remove do conjunto
        if(carimbadas.find(x) != carimbadas.end()) {
            carimbadas.erase(x);
        }
    }

    // O tamanho do conjunto agora representa as carimbadas que faltam
    cout << carimbadas.size() << endl;

    return 0;
}

```
