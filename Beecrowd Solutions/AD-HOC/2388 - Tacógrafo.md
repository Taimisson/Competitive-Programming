# 2388 - Tacógrafo

Apesar das restrições dos aparelhos novos, a SBC quer poder saber qual foi a distância percorrida pelos caminhões. Você deverá escrever um programa que recebe uma série de intervalos de tempo com suas respectivas velocidades médias e calcula qual foi a distância total percorrida pelo caminhão de acordo com o tacógrafo.

[Tacógrafo - LeetCode](https://www.beecrowd.com.br/judge/pt/problems/view/2388)

# Solução

```
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, t, v, distancia = 0;
    cin >> n;
    while (n--) {
        cin >> t >> v;
        distancia += t * v;
    }
    cout << distancia << "\n";
}
```