# 1009 - Salário com Bônus

Faça um programa que leia o nome de um vendedor, o seu salário fixo e o total de vendas efetuadas por ele no mês (em dinheiro). Sabendo que este vendedor ganha 15% de comissão sobre suas vendas efetuadas, informar o total a receber no final do mês, com duas casas decimais.

[Salário com Bônus](https://www.beecrowd.com.br/judge/pt/problems/view/1009)

# Solução

```
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string nome;
    double salario, vendas;

    cin >> nome >> salario >> vendas;

    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << salario + (0.15 * vendas) << endl;

    return 0;
}
```