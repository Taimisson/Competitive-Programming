# 1019 - Conversão de Tempo

Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, e informe-o expresso no formato horas:minutos:segundos.

[Conversão de Tempo - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1019)

# Solução

```
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int x;
    cin >> x;

    int horas = x / 3600;
    x %= 3600;

    int minutos = x / 60;
    int segundos = x % 60;

    cout << horas << ":" << minutos << ":" << segundos << endl;

    return 0;
}
```