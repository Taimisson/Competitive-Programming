# 1589 - Bob Conduite

Qual o menor raio do conduite que você deve comprar? Em outras palavras, dado dois círculos, qual o raio do menor círculo que possa englobar ambos os dois?

[Bob Conduite - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1589)

# Solution

```
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a, b;
    cin >> a >> b;
    cout << a + b << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    while(n--)
        solve();
}
```