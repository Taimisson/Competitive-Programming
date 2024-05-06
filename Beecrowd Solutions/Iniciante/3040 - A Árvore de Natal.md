# 3040 - A Árvore de Natal

Roberto quer que sua árvore tenha pelo menos 200 centímetros de altura, mas não quer que ela seja maior do que 300 centímetros, ou a árvore não irá caber em sua casa. Quanto a espessura, ele deseja que a sua árvore tenha um tronco com 50 centímetros de diâmetro ou mais. O número de galhos da árvore tem que ser igual ou maior a 150.

[A Árvore de Natal - Beecrowd](https://judge.beecrowd.com/pt/problems/view/3040)

# Solução

```
#include <iostream>
using namespace std;

int main() {
    int N; // Number of trees
    cin >> N;

    for (int i = 0; i < N; i++) {
        int h, d, g; // Height, diameter, and number of branches
        cin >> h >> d >> g;

        if (h >= 200 && h <= 300 && d >= 50 && g >= 150) {
            cout << "Sim" << endl;
        } else {
            cout << "Nao" << endl;
        }
    }

    return 0;
}
```