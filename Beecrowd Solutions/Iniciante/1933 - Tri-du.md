# 1933 - Tri-du

Note que o jogo pode não ter ganhador em muitas situações; nesses casos, as cartas distribuídas são devolvidas ao baralho, que é embaralhado e uma nova partida é iniciada

Um jogador já recebeu duas das cartas que deve receber, e conhece seus valores. Sua tarefa é escrever um programa para determinar qual o valor da terceira carta que maximiza a probabilidade de esse jogador ganhar o jogo.

[Tri-du - Beecrowd](https://judge.beecrowd.com/pt/problems/view/1933)

# Solução
```
#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    
    if (A == B) {
        result = A;
    }
    cout << result << endl;
    
    return 0;
}

```