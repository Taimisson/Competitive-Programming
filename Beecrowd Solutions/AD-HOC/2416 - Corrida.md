# 2416 - Corrida

Por exemplo, se a pista tem 12 metros e Leonardo fixou seu treinamento em 22 metros, o ponto de término é 10.

Sua tarefa é, dado o número C de metros que Leonardo pretende correr e o comprimento N em metros da pista circular, determinar o ponto de término de seu treinamento.

[Corrida - Beecrowd](https://judge.beecrowd.com/pt/problems/view/2416)

# Solução

```
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int c, n;
    cin >> c >> n;
    
    cout << c % n << endl;
    
    return 0;
}
```