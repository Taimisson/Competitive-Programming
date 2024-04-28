# 2516 - Corrida

Neste momento, seu amigo está a S metros de distância de você. Você está correndo a uma velocidade constante de va metros por segundo, e seu amigo está correndo a uma velocidade constante de vb metros por segundo. A figura abaixo ilustra a situação:

[Corrida - Beecrowd](https://judge.beecrowd.com/pt/problems/view/2516)

# Solution

```
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int S, va, vb;
    while (cin >> S >> va >> vb) {
        if (va <= vb) {
            cout << "impossivel\n";
        } else {
            double t = static_cast<double>(S) / (va - vb);
            cout << fixed << setprecision(2) << t << endl;
        }
    }
    return 0;
}
```