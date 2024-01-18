# 1985 - MacPRONALTS

O MacPRONALTS está com uma super promoção, exclusivo para os competidores da primeira Seletiva do MaratonaTEC. Só que teve um problema, todos os maratonistas foram tentar comprar ao mesmo tempo, com isso gerou uma fila muito grande. O pior é que a moça do caixa estava sem calculadora ou um programa para ajudá-la a calcular com maior agilidade, eis que surge você para fazer um programa para ajudar a coitada e aumentar a renda do MacPRONALTS. Segue o cardápio do dia contendo o número do produto e seu respectivo valor.

[MacPRONALTS - BeeCrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1985)

# Solução

```
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main()
{
    map<int, double> products;
    products[1001] = 1.50;
    products[1002] = 2.50;
    products[1003] = 3.50;
    products[1004] = 4.50;
    products[1005] = 5.50;

    int n;
    cin >> n;
    double total = 0;
    while(n--){
        int id, qntd;
        cin >> id >> qntd;
        total+= products[id] * qntd;
    }
    
    cout << fixed << setprecision(2) << total << "\n";
}
```