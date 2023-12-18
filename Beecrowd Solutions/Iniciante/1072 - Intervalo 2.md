# 1072 - Intervalo 2

Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que serão lidos em seguida.
Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo, mostrando essas informações.

[Intervalo 2 - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1072)

```
#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int n, dentro = 0, fora = 0;
    cin >> n; 
    
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x >= 10 && x <= 20)
            dentro++;
        else
            fora++;
    }
    
    cout << dentro << " in" << "\n";
    cout << fora << " out" << "\n";
    
    return 0;
}
```
