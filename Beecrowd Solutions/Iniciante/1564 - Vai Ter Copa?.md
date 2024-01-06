# 1564 - Vai Ter Copa?

O Brasil é o país sede da copa esse ano. Porém, há muitas pessoas protestando contra o governo. Em redes sociais é possível ver pessoas afirmando que não vai ter copa devido aos protestos.

Mas esses rumores de que não haverá copa são totalmente falsos, a presidente Dilma Roussef já avisou: vai ter copa sim, e se reclamar vai ter duas!

[Vai Ter Copa? - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1564)

# Solução

```
#include <bits/stdc++.h>
using namespace std;

void solve(int x){
    if(x > 0)
        cout << "vai ter duas!" << "\n";
    else
        cout << "vai ter copa!" << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    while(cin >> n)
        solve(n);

} 
```