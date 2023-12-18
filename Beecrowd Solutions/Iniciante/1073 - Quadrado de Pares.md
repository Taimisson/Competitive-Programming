# 1073 - Quadrado de Pares

Leia um valor inteiro N. Apresente o quadrado de cada um dos valores pares, de 1 até N, inclusive N, se for o caso.

[Quadrado de Pares - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1073)

# Solução

```
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;

    for(int i = 2; i <= n; i+=2)
        cout <<  i << "^2 = " << i*i << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;

    while(t--){
        solve();
    }

    return 0;
}
```