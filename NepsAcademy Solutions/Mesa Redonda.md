# Mesa Redonda

# Solução
```
#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    // Inicializa os contadores para Ana e Beatriz
    int contA = 0, contB = 0;

    // Calcula a posição de Ana
    for (int i = 0; i < A; ++i) {
        contA++;
        if (contA == 3) {
            contA = 0;
        }
    }

    // Calcula a posição de Beatriz
    for (int i = 0; i < B; ++i) {
        contB++;
        if (contB == 3) {
            contB = 0;
        }
    }

    // Ajusta a posição de Beatriz se for igual à de Ana
    if (contB == contA) {
        contB++;
        if (contB == 3) {
            contB = 0;
        }
    }

    // Determina a posição da cadeira de Carolina
    int cadeiraCarolina;
    if ((contA == 0 && contB == 1) || (contA == 1 && contB == 0)) {
        cadeiraCarolina = 2;
    } else if ((contA == 0 && contB == 2) || (contA == 2 && contB == 0)) {
        cadeiraCarolina = 1;
    } else if ((contA == 1 && contB == 2) || (contA == 2 && contB == 1)) {
        cadeiraCarolina = 0;
    }

    // Imprime a cadeira disponível para Carolina
    cout << cadeiraCarolina << endl;

    return 0;
}


auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
```