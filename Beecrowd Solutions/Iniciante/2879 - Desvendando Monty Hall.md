# 2879 - Desvendando Monty Hall

• O jogador sempre escolhe inicialmente a porta 1;

• O jogador sempre troca de porta, depois que o apresentador revela um bode abrindo uma das duas portas que não foram escolhidas inicialmente.

Nessas condições, em um jogo, dado o número da porta que contém o carro, veja que podemos saber exatamente se o jogador vai ganhar ou não o carro.

[Desvendando Monty Hall - Beecrowd](https://judge.beecrowd.com/pt/problems/view/2879)

# Solução

```
#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    int wins = 0;
    for (int i = 0; i < N; ++i) {
        int carDoor;
        cin >> carDoor;
        // The player wins if the car is NOT behind door 1, since they will always switch.
        if (carDoor != 1) {
            wins++;
        }
    }
    
    cout << wins << endl;
    
    return 0;
}
```