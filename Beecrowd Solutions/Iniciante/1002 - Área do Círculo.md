# 1002 - Área do Círculo

A fórmula para calcular a área de uma circunferência é: area = π . raio2. Considerando para este problema que π = 3.14159:

- Efetue o cálculo da área, elevando o valor de raio ao quadrado e multiplicando por π.

[Área do Círculo - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1002)

# Solução

```
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double R;
    cin >> R;

    cout << fixed << setprecision(4);
    cout << "A=" << 3.14159 * (R * R) << endl;

    return 0;
}
```