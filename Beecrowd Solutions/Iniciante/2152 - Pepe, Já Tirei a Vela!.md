# 2152 - Pepe, Já Tirei a Vela!

Escreva um programa que, dado um registro de log, este seja convertido em textos mais legíveis.

[Pepe, Já Tirei a Vela! - Beecrowd](https://judge.beecrowd.com/pt/problems/view/2152)

# Solução

```
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
 
int main() {
 
    int n;
    cin >> n;
    while(n--){
        int h, m, o;
        cin >> h >> m >> o;
        
        cout << setw(2) << setfill('0') << h << ":";
        cout << setw(2) << setfill('0') << m << " - ";
        
        if(o == 1) cout << "A porta abriu!" << "\n";
        else cout << "A porta fechou!" << "\n";
    }
    
    return 0;
}
```