# 1715 - Handebol

Frustrado e desanimado com os resultados de sua equipe de futebol, o Super Brasileiro Clube (SBC) resolveu investir na equipe de handebol. Para melhor avaliar os atletas, os técnicos identificaram que seria útil analisar a regularidade dos jogadores. Especificamente, eles estão interessados em saber quantos jogadores fizeram gols em todas as partidas.

Como o volume de dados é muito grande, eles gostariam de ter um programa de computador para realizar essa contagem.

[Handebol - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1715)

# Solução

```
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m, gol, count = 0;
    cin >> n >> m;

    for(int i = 0; i < n; ++i){
        bool marcouTodas = true;
        for(int j = 0; j < m; ++j){
            cin >> gol;
            if(gol == 0)
                marcouTodas = false;
        }
        if(marcouTodas) count++;
    }

    cout << count << "\n";
}
```