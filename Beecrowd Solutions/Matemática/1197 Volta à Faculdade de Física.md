# 1197 - Volta à Faculdade de Física

Uma partícula tem velocidade inicial e aceleração constante. Se a sua velocidade após certo momento é v então qual será seu deslocamento no dobro deste tempo?

[Volta à Faculdade de Física - Beecrowd](https://judge.beecrowd.com/pt/problems/view/1197)

# Solução

```
#include <iostream>
using namespace std;

int main() {
    int v, t;
    while (cin >> v >> t) {
        int displacement = 2 * v * t;
        cout << displacement << endl;
    }
    return 0;
}
```



