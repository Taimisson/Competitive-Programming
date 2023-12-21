# Sequência IJ 3

Você deve fazer um programa que apresente a sequencia conforme o exemplo abaixo.

[Sequência IJ 3 - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1097)

# Solução

```
#include <bits/stdc++.h>
using namespace std;

void solve(){
    
    for(int i = 1; i <= 9; i += 2)  // Incrementa I de 2 em 2
        for(int j = i + 6; j >= i + 4; j--){ // Inicia J em I+6 e vai até I+4
            cout << "I=" << i << " ";
            cout << "J=" << j << "\n";
        }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    solve();
    
    return 0;
}
```