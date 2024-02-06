# 2060 - Desafio de Bino

Esse desafio pode parecer simples, porém, quando a lista contém muitos números, Cino se confunde e acaba errando alguns cálculos. Para ajudar Cino, faça um programa para resolver o desafio de Bino.

[Desafio de Bino - Beecrowd](https://www.beecrowd.com.br/judge/pt/runs/code/37472650)

# Solução

```
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, dois = 0, tres = 0, quatro = 0, cinco = 0;
    cin >> n;
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        if(x % 2 == 0)
            dois++;
        if(x % 3 == 0)
            tres++;
        if(x % 4 == 0)
            quatro++;
        if(x % 5 == 0)
            cinco++;

    }

    cout << dois << " Multiplo(s) de 2" << "\n";
    cout << tres << " Multiplo(s) de 3" << "\n";
    cout << quatro << " Multiplo(s) de 4" << "\n";
    cout << cinco << " Multiplo(s) de 5" << "\n";
}

```