# 1155 - Sequência S

Escreva um algoritmo para calcular e escrever o valor de S, sendo S dado pela fórmula:
S = 1 + 1/2 + 1/3 + … + 1/100

[Sequência S - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1155)

```
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    double S = 1;
    
    for(int i = 2; i <= 100; ++i){
        S += 1.0/i;
    }
        
    cout << fixed << setprecision(2);
    cout << S << endl;
}
```