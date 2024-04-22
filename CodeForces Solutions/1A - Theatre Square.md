# 1A Theatre Square

https://codeforces.com/problemset/problem/1/A

# Solution

```
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int m, n, a;
    cin >> m >> n >> a;
    
    // Calcula quantos ladrilhos são necessários, arredondando para cima
    int comprimento = ceil(n / (double) a); 
    int largura = ceil(m / (double) a);
    

    //  long long para a multiplicação para evitar overflow
    cout << (ll) comprimento * largura << "\n"; 
}
```