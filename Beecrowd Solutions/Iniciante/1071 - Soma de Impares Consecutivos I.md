# 1071 - Soma de Impares Consecutivos I

Leia 2 valores inteiros X e Y. A seguir, calcule e mostre a soma dos números impares entre eles.

[Soma de Impares Consecutivos I - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1071)

# Solução

```
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x, y, soma = 0;
    cin >> x >> y;

    if(x > y){
        int temp = x;
        x = y;
        y = temp;
    }

    for(int i = x + 1; i < y; i++)
        if(i % 2 != 0)
            soma += i;

    cout <<  soma << endl;

    return 0;
}
```