# 2718 - Luzes de Natal

Por serem muitos grupos, a tarefa se tornou tediosa e para tentar remediar isso, Giovanna, observando a semelhança dos grupos com representação binária de números quando imaginava lâmpadas queimadas como 1's e lâmpadas funcionais como 0's, decidiu pensar neles efetivamente como números e escreveu as representações decimais desses binários então tentou descobrir a quantidade de lâmpadas a serem trocadas a partir dessas anotações.

Sua tarefa é, dado as anotações de Gio, diga quantas lâmpadas serão trocadas em cada grupo.

[Luzes de Natal - Beecrowd](https://judge.beecrowd.com/pt/problems/view/2718)

# Solução

```
#include <bits/stdc++.h>
#define ll long long 

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int N;
    cin >> N;
    
    for(int i = 0; i < N; ++i){
        ll x;
        cin >> x;
        
        int maiorSequencia = 0;
        int sequenciaAtual = 0;
        
        while(x > 0){
            if((x & 1) == 1){
                sequenciaAtual++;
                maiorSequencia = max(maiorSequencia, sequenciaAtual);
            }
            else
            {
                sequenciaAtual = 0;
            }
            x >>= 1;
        }
        
        cout << maiorSequencia << endl;
    }
}
```
