# 2172 - Evento

Prog e Cackto começaram recentemente a jogar um jogo de RPG chamado Fortaleza. Neste, para o jogador evoluir de nível o mesmo precisa derrotar monstros, nos quais dá um valor de experiência (XP) para o jogador.

A produtora do jogo, Jogos Extremos, anunciou que na próxima semana irá realizar o primeiro evento XP no qual aumentará a experiência dos monstros em X vezes. Como Prog e Cackto estão em um nível muito alto no qual os monstros tem um valor muito alto de pontos de experiência, eles estão tendo dificuldades de calcular a quantidade de pontos de experiência que os monstros terão durante o evento. Você pode ajudá-los?

[Evento - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/2172)

# Solução

```
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int x, m;
    while(true){
        cin >> x >> m;
        if(x == 0 && m == 0) break;
        cout << m * x << "\n";
    }
}
```