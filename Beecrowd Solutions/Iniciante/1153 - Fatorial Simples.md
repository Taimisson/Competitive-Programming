# 1153 - Fatorial Simples

Ler um valor N. Calcular e escrever seu respectivo fatorial. Fatorial de N = N * (N-1) * (N-2) * (N-3) * ... * 1

[Fatorial Simples - Beecrowd]()

# Solução

```
#include <bits/stdc++.h>
using namespace std;

int fatorial(int x){
    if(x == 0)
        return 1;
    
    return x * fatorial(x - 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int x;
    cin >> x;
    cout << fatorial(x) << "\n";
}
```
