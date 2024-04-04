# 2862 - Inseto!

[Inseto! - Beecrowd](https://judge.beecrowd.com/pt/problems/view/2862)

# Solução
```
#include <iostream>
using namespace std;

int main() {
    int C; // Número de casos de teste
    cin >> C;

    for(int i = 0; i < C; i++) {
        int N; // Nível de energia
        cin >> N;

        if (N > 8000) {
            cout << "Mais de 8000!" << endl;
        } else {
            cout << "Inseto!" << endl;
        }
    }

    return 0;
}

```
