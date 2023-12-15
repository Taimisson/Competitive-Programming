# 1066 - Pares, Ímpares, Positivos e Negativos

Leia 5 valores Inteiros. A seguir mostre quantos valores digitados foram pares, quantos valores digitados foram ímpares, quantos valores digitados foram positivos e quantos valores digitados foram negativos.

[]()

# Solução

```
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int par = 0, impar = 0, positivo = 0, negativo = 0;
    for(int i = 0; i < 5; i++){
        int num;
        cin >> num;

        if(num % 2 == 0) par++; else impar++;
        if(num > 0) positivo++; else if(num < 0) negativo++;
    }

    cout << par << " valor(es) par(es)" << endl;
    cout << impar << " valor(es) impar(es)" << endl;
    cout << positivo << " valor(es) positivo(s)" << endl;
    cout << negativo << " valor(es) negativo(s)" << endl;
    return 0;
}
```