# 1014 - Consumo

Calcule o consumo médio de um automóvel sendo fornecidos a distância total percorrida (em Km) e o total de combustível gasto (em litros).

[Consumo - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1014)

# Solução

```
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int distancia;
    double combustivel;

    cin >> distancia >> combustivel;

    cout << fixed << setprecision(3);
    cout << distancia / combustivel << " km/l" << endl;

    return 0;
}
```