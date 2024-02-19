# 2140 - Duas Notas

Gilberto é um famoso vendedor de esfirras na região. Porém, apesar de todos gostarem de suas esfirras, ele só sabe dar o troco com duas notas, ou seja, nem sempre é possível receber o troco certo. Para facilitar a vida de Gil, escreva um programa para ele que determine se é possível ou não devolver o troco exato utilizando duas notas.

As notas disponíveis são: 2, 5, 10, 20, 50 e 100.

[Duas Notas - Beecrowd](https://judge.beecrowd.com/pt/problems/view/2140)

# Solução
```
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int notas[] = {2, 5, 10, 20, 50, 100};
    int N, M;
    while(true){
        cin >> N >> M;
        if(N == 0 && M == 0) break;
        
        int troco = M - N;
        bool possivel = false;
        
        for(int i = 0; i < 6; ++i)
            for(int j = 0; j < 6; ++j)
                if(notas[i] + notas[j] == troco){
                    possivel = true;
                    goto end_loop;
                }
        end_loop:
        
        if(possivel) cout << "possible" << "\n";
        else cout << "impossible" << "\n";
    }

    return 0;
}
```