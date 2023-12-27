# 1143 - Quadrado e ao Cubo

Escreva um programa que leia um valor inteiro N (1 < N < 1000). Este N é a quantidade de linhas de saída que serão apresentadas na execução do programa.

[Quadrado e ao Cubo - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1143)

# Solução

```
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n; 
    cin >> n;
    
    for(int i = 1; i <= n; i++)
        cout << i << " " << i * i << " " << i * i * i << "\n";

}
```