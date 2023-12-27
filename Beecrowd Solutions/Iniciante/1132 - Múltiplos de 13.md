# 1132 - Múltiplos de 13

Escreva um algoritmo que leia 2 valores inteiros X e Y calcule a soma dos números que não são múltiplos de 13 entre X e Y, incluindo ambos.

[Múltiplos de 13  - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1132)

# Solução
```
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int x, y, soma = 0;
    cin >> x >> y;
    
    if(x > y){
        int temp = x;
        x = y;
        y = temp;
    }
    
    for(int i = x; i <= y; i++){
        if(i % 13 != 0)
            soma += i;
    }
    
    cout << soma << endl;
}
```