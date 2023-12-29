# 1154 - Idades

Faça um algoritmo para ler um número indeterminado de dados, contendo cada um, a idade de um indivíduo. O último dado, que não entrará nos cálculos, contém o valor de idade negativa. Calcular e imprimir a idade média deste grupo de indivíduos.

[Idades - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1154)

# Solução
```
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int x, idades = 0, cont = 0;
    
    while(true){
        cin >> x;
        
        if(x < 0)
            break;
        else{
            idades += x;
            cont++;
        }
    }
    
    cout << fixed << setprecision(2);
    cout << (double) idades / cont << endl;
        
}
```