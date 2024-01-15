# 2455 - Gangorra

Joãozinho acaba de mudar de escola e a primeira coisa que percebeu na nova escola é que a gangorra do parquinho não é simétrica, uma das extremidades é mais longa que a outra. Após brincar algumas vezes com um amigo de mesmo peso, ele percebeu que quando está em uma extremidade, a gangorra se desequilibra para o lado dele (ou seja, ele fica na parte de baixo, e o amigo na parte de cima), mas quando eles trocam de lado, a gangorra se desequilibra para o lado do amigo. Sem entender a situação, Joãozinho pediu ajuda a outro amigo de outra série, que explicou que o comprimento do lado interfere no equilíbrio da gangorra, pois a gangorra estará equilibrada quando

P1 ∗ C1 = P2 ∗ C2

onde P1 e P2 são os pesos da criança no lado esquerdo e direito, respectivamente, e C1 e C2 são os comprimentos da gangorra do lado esquerdo e direito, respectivamente.

[Gangorra - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/2455)

# Solução

```
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int p1, c1, p2, c2;
    cin >> p1 >> c1 >> p2 >> c2;
    
    int esquerda = p1 * c1;
    int direita = p2 * c2;
    
    if(esquerda == direita) cout << 0 << "\n";
    else if(esquerda > direita) cout << -1 << "\n";
    else cout << 1 << "\n";
}
```