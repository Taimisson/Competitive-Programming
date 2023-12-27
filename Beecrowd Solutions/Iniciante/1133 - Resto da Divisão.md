# 1133 - Resto da Divisão

Escreva um programa que leia 2 valores X e Y e que imprima todos os valores entre eles cujo resto da divisão dele por 5 for igual a 2 ou igual a 3.

[Resto da Divisão - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1133)

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
    
    for(int i = x + 1; i < y; i++){
        if(i % 5 == 2 || i % 5 == 3)
            cout << i << endl;
    }
    
}
```