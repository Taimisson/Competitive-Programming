# 1557 - Matriz Quadrada III

Escreva um algoritmo que leia um inteiro N (0 ≤ N ≤ 15), correspondente a ordem de uma matriz M de inteiros, e construa a matriz de acordo com o exemplo abaixo.

[Matriz Quadrada III - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1557)

# Solução

```
#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;

    while (true) {
        cin >> N;
        if (N == 0) break;

        int maxVal = pow(2, 2 * (N - 1));
        int maxDigits = to_string(maxVal).length();

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (j > 0) cout << " ";
                cout << setw(maxDigits) << (int)pow(2, i + j);
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
```
