# 1020 - Idade em Dias

Leia um valor inteiro correspondente à idade de uma pessoa em dias e informe-a em anos, meses e dias

Obs.: apenas para facilitar o cálculo, considere todo ano com 365 dias e todo mês com 30 dias. Nos casos de teste nunca haverá uma situação que permite 12 meses e alguns dias, como 360, 363 ou 364. Este é apenas um exercício com objetivo de testar raciocínio matemático simples.

[Idade em Dias - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1020)

# Solução
```
#include <iostream>
using namespace std;
 
int main() {
 
    int x;
    cin >> x;
    
    int anos = x / 365;
    x %= 365;
    int mes = x / 30;
    int dias = x % 30;
    
    cout << anos << " ano(s)" << "\n";
    cout << mes << " mes(es)" << "\n";
    cout << dias << " dia(s)" << "\n";
 
    return 0;
}
```