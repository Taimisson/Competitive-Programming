# 1145 - Sequência Lógica 2

Escreva um programa que leia dois valores X e Y. A seguir, mostre uma sequência de 1 até Y, passando para a próxima linha a cada X números.

[Sequência Lógica 2- Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1145)

```
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int x, y;
    cin >> x >> y;
    
    for(int i = 1; i <= y; i++){
        cout << i;
        if(i % x == 0)
            cout << "\n";
        else if(i < y)
            cout << " ";
    }
}
```