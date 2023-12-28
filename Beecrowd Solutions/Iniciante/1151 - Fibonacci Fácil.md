# 1151 - Fibonacci Fácil

A seguinte sequência de números 0 1 1 2 3 5 8 13 21... é conhecida como série de Fibonacci. Nessa sequência, cada número, depois dos 2 primeiros, é igual à soma dos 2 anteriores. Escreva um algoritmo que leia um inteiro N (N < 46) e mostre os N primeiros números dessa série.

[Fibonacci Fácil - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1151)

# Solução
```
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    int a = 0, b = 1;
    for(int i = 0; i < n; i++){
        if(i > 0)
            cout << " ";
        cout << a;
        
        int next = a + b;
        a = b;
        b = next;
   }
   cout << "\n";
}
```