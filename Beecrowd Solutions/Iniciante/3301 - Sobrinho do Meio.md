# 3301 - Sobrinho do Meio

Tio Patinhas era um milionário que vivia em sua mansão, e tinha três sobrinhos: Huguinho, Zezinho e Luisinho. Ele se confundia facilmente entre os três sobrinhos, pois eram bem parecidos, apesar de terem idades diferentes. Um dia, os três fizeram uma aposta com o tio: se ele acertasse quem era o sobrinho do meio, ou seja, nem o mais novo, nem o mais velho, eles dariam uma moeda de ouro para ele, e se ele errasse, teria que dar uma moeda de ouro para cada um. Assim, o tio pede a tua ajuda para que ele possa ganhar essa aposta.

[Sobrinho do Meio - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/3301)

# Solução

```
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int h, z, l;
    while(cin >> h >> z >> l) {
        if((h > z && h < l) || (h < z && h > l))
            cout << "huguinho" << "\n";
        else if((z > h && z < l) || (z < h && z > l))
            cout << "zezinho" << "\n";
        else
            cout << "luisinho" << "\n";
    }
    return 0;
}

```