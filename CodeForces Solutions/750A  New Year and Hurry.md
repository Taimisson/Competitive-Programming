# 750A - New Year and Hurry

https://codeforces.com/problemset/problem/750/A

# Solution
```
#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    // Tempo total disponível para resolver problemas, subtraindo o tempo de viagem até a festa.
    int availableTime = 240 - k;
    
    // Contador para o número de problemas que Limak pode resolver.
    int problemsSolved = 0;
    
    // Tempo total gasto resolvendo problemas.
    int totalTimeSpent = 0;
    
    for(int i = 1; i <= n; ++i) {
        totalTimeSpent += 5 * i; // Tempo gasto para resolver o problema atual.
        if(totalTimeSpent <= availableTime) {
            problemsSolved++; // Limak pode resolver esse problema.
        } else {
            break; // Limak não tem tempo suficiente para resolver mais problemas.
        }
    }
    
    cout << problemsSolved << endl; // Imprime o número máximo de problemas que Limak pode resolver.
    
    return 0;
}

```