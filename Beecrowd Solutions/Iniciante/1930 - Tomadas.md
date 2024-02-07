# 1930 - Tomadas

Precavidos, os três membros do time e o técnico compraram cada um uma régua de tomadas, permitindo assim ligar vários aparelhos na única tomada do quarto de hotel; eles também podem ligar uma régua em outra para aumentar ainda mais o número de tomadas disponíveis. No entanto, como as réguas têm muitas tomadas, eles pediram para você escrever um programa que, dado o número de tomadas em cada régua, determine o número máximo de aparelhos que podem ser conectados à energia num mesmo instante.

[Tomadas - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1930)

# Solução

```
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t1, t2, t3, t4;
    cin >> t1 >> t2 >> t3 >> t4;
    
    int total = t1 - 1 + t2 - 1 + t3 - 1 + t4;
    
    cout << total << endl;
    
    return 0;
}
```