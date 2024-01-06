# 1759 - Ho Ho Ho

Papai Noel está brincando com seus duendes para entretê-los durante a véspera do Natal. A brincadeira consiste nos elfos escreverem números em pedaços de papel e colocarem no gorro do Papai Noel. Após todos terminarem de colocar os números Noel sorteia um papel e aquele número representa quantos "Ho" o Noel deve falar.

Seu trabalho é ajudar o Papai Noel montando um problema que mostre todos os "Ho" que ele deve falar dado o número sorteado.

[Ho Ho Ho - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1759)

# Solução

```
#include <bits/stdc++.h>
using namespace std;

void solve(int x){
    for(int i = 0; i < x; ++i){
        if(i == x - 1)
            cout << "Ho!" << "\n";
        else
            cout << "Ho ";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    solve(n);

}
```