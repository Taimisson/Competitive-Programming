# 1641 - Restaurante e Pizzaria do Alfredo

Tradicionalmente depois do Local Contest em Louisiana, juízes e participantes vão juntos para seu restaurante favorito, Restaurante e Pizzaria do Alfredo. Os participantes estão realmente famintos após 5 horas de competição. Para pegar suas pizzas o mais rápido possível, eles decidiram pedir uma pizza grande para todos ao invés de várias pizzas pequenas. Eles gostariam de saber se é possível colocar uma pizza grande com formato retangular sobre a superfície de uma mesa redonda de modo que não fiquem partes penduradas na borda da mesa. Como todos estão cansados e famintos, escreva um programa que os ajude!

[Restaurante e Pizzaria do Alfredo - Beecrowd](https://judge.beecrowd.com/pt/runs/code/39197622)

# Solução

```
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int R, W, L;
    int caseNumber = 1;

    while(cin >> R && R != 0){
        cin >> W >> L;

        double diagonal = sqrt(W*W + L*L);
        double diameter = 2*R;

        if(diagonal <= diameter){
            cout << "Pizza " << caseNumber << " fits on the table." << endl;
        } else {
            cout << "Pizza " << caseNumber << " does not fit on the table." << endl;
        }

        caseNumber++;
    }

    return 0;
}
```