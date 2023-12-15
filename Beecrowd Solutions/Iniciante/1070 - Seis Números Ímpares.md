# 1070 - Seis Números Ímpares

Leia um valor inteiro X. Em seguida apresente os 6 valores ímpares consecutivos a partir de X, um valor por linha, inclusive o X ser for o caso.

[Seis Números Ímpares - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1070)

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

    if(x % 2 == 0){
        x++;
        cout << x << endl;
    }else
        cout << x << endl;
    
    for(int i = 0; i < 5; i++){
        x+=2;
        cout << x << endl;
    }
    
    return 0;
}
```