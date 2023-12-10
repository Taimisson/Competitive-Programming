# 1008 - Salário

Escreva um programa que leia o número de um funcionário, seu número de horas trabalhadas, o valor que recebe por hora e calcula o salário desse funcionário. A seguir, mostre o número e o salário do funcionário, com duas casas decimais.

[Salário - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1008)

# Solução

```
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int funcionario, horasT;
    double horasV;

    cin >> funcionario >> horasT >> horasV;

    cout << "NUMBER = " << funcionario << endl;
    cout << fixed << setprecision(2);
    cout << "SALARY = U$ " << horasT * horasV << endl;

    return 0;
}
```