# 1585 - Fazendo Pandorgas

Anastácia adora construir pipas (ou pandorgas) para seus amigos. Pedro, que sabe disso, separou vários retalhos de bambus da fábrica de móveis de seu tio que seriam descartados para dar a Anastácia. Ao entregar os bambus à Anastácia, Pedro perguntou a ela qual era a maior pipa que poderia ser construída com aqueles retalhos de bambus. Anastácia, então, que não é muito boa em calcular, quer que você a ajude nesta tarefa.

Obs.: Cada pipa é construída com dois pedaços de bambus amarrados em forma de cruz, formando um losango.

[Fazendo Pandorgas- Beecrowd](https://judge.beecrowd.com/pt/problems/view/1585)

# Solução

```
#include <iostream>
using namespace std;

int main() {
    int N, x, y;
    cin >> N;  // Não é mais necessário usar std::cin

    for (int i = 0; i < N; i++) {
        cin >> x >> y;  // Não é mais necessário usar std::cin
        int area = (x * y) / 2;  // Calcula a área do losango
        cout << area << " cm2" << endl;  // Não é mais necessário usar std::cout e std::endl
    }

    return 0;
}
```