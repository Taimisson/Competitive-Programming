# 50A	Domino piling

https://codeforces.com/problemset/problem/50/A

# Solution

```
#include <bits/stdc++.h>
using namespace std;

void solve(int x){
    if(x % 2 == 0)
        cout << x / 2 << "\n";
    else{
        x -= 1;
        cout << x /2 << "\n";
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int m, n, x;
    cin >> m >> n;

    x = m * n;
    solve(x);
}
```

Cada peça de dominó ocupa duas células. Portanto, o número máximo de dominós que você pode colocar é limitado pela metade do número total de células no tabuleiro.
O número total de células no tabuleiro é M x N.
Se M x N for um número ímpar, uma célula ficará vazia, pois não pode ser coberta por um dominó.