# 1555 - Funções

Na última aula de matemática, Rafael, Beto e Carlos aprenderam algumas novas funções matemáticas. Cada um deles se identificou com uma função em especial, e resolveram competir para ver quem tinha a função de maior resultado.

A função que Rafael escolheu é r(x, y) = (3x)² + y².

Já Beto escolheu a função b(x, y) = 2(x²) + (5y)².

Carlos, por sua vez, escolheu a função c(x, y) = -100x + y³.

Dados os valores x e y, diga quem escolheu a função com o maior resultado.

[Funções - Beecrowd](https://judge.beecrowd.com/pt/problems/view/1555)

# Solução

```
#include <iostream>
using namespace std;

// Define the functions for Rafael, Beto, and Carlos
int r(int x, int y) {
    return (3*x)*(3*x) + y*y;
}

int b(int x, int y) {
    return 2*(x*x) + (5*y)*(5*y);
}

int c(int x, int y) {
    return -100*x + y*y*y;
}

int main() {
    int N, x, y;
    cin >> N;

    while (N--) {
        cin >> x >> y;
        int resR = r(x, y);
        int resB = b(x, y);
        int resC = c(x, y);

        // Determine who has the maximum function value
        if (resR > resB && resR > resC) {
            cout << "Rafael ganhou" << endl;
        } else if (resB > resR && resB > resC) {
            cout << "Beto ganhou" << endl;
        } else {
            cout << "Carlos ganhou" << endl;
        }
    }
    return 0;
}
```