# 1067 - Números Ímpares

Leia um valor inteiro X (1 <= X <= 1000). Em seguida mostre os ímpares de 1 até X, um valor por linha, inclusive o X, se for o caso.

[Números Ímpares - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1067)

# Solução

```
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x;
    cin >> x;

    for(int i = 1; i <= x; i+=2) cout << i << endl;

    return 0;
}
```