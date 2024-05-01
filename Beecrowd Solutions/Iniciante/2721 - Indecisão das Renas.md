# 2721 - Indecisão das Renas

Então optaram pela seguinte forma para escolher: Cada Rena faria a quantidade que quisesse de bolas de neve, sem as outras verem. Depois, todas as bolas de neve de todas as Renas seriam reunidas em uma única e grande pilha. Por último, as bolas de neve seriam tiradas dessa pilha, uma a uma, e distribuídas entre elas sempre seguindo a ordem: Dasher, Dancer, Prancer, Vixen, Comet, Cupid, Donner, Blitzen e Rudolph. Até que se acabassem as bolas de neve. A rena que ficasse com a última bola de neve seria declarada vencedora e ficaria na posicão principal do trenó este ano.

Dado o número de bolas de neve feitas por cada Rena, determine qual Rena ganhou o sorteio.

[Indecisão das Renas - Beecrowd](https://judge.beecrowd.com/pt/problems/view/2721)

# Solução

```
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> snowballs(9);
    vector<string> renas = {"Dasher", "Dancer", "Prancer", "Vixen", "Comet", "Cupid", "Donner", "Blitzen", "Rudolph"};
    
    // Lê a quantidade de bolas de neve feitas por cada Rena
    for (int i = 0; i < 9; ++i) {
        cin >> snowballs[i];
    }
    
    // Calcula a soma total de todas as bolas de neve
    int totalSnowballs = 0;
    for (int snowball : snowballs) {
        totalSnowballs += snowball;
    }
    
    // Determina a posição da última bola de neve
    int lastPosition = (totalSnowballs - 1) % 9;
    
    // Imprime o nome da Rena que fica com a última bola
    cout << renas[lastPosition] << endl;
    
    return 0;
}
```