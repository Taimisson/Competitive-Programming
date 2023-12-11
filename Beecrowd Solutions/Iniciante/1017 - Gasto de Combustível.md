# 1017 - Gasto de Combustível

Joaozinho quer calcular e mostrar a quantidade de litros de combustível gastos em uma viagem, ao utilizar um automóvel que faz 12 KM/L. Para isso, ele gostaria que você o auxiliasse através de um simples programa. Para efetuar o cálculo, deve-se fornecer o tempo gasto na viagem (em horas) e a velocidade média durante a mesma (em km/h). Assim, pode-se obter distância percorrida e, em seguida, calcular quantos litros seriam necessários. Mostre o valor com 3 casas decimais após o ponto.

[Gasto de Combustível - Beecrwod](https://www.beecrowd.com.br/judge/pt/problems/view/1017) 

# Solução 

```
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int tempo, velocidade;

    cin >> tempo >> velocidade;

    double dist = tempo * velocidade;
    double combustivel = dist / 12.0;

    cout << fixed << setprecision(3) << combustivel << endl;

    return 0;
}
```