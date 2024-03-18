# 2031 - Pedra, Papel, Ataque Aéreo

Pedra, Papel, Ataque Aéreo é um jogo infantil muito popular, em que duas ou mais crianças formam um círculo e fazem gestos com a mão na tentativa de obter a vitória. As regras são surpreendentemente complexas para um jogo de crianças, mas mesmo assim é bastante popular por todo o mundo.
As partidas são muito simples. Os jogadores podem escolher entre o sinal de uma Pedra (o punho), o sinal de um Papel (a palma aberta), e o sinal para o Ataque Aéreo (igual o do Papel, mas com apenas o polegar e o mindinho estendidos).

[Pedra, Papel, Ataque Aéreo - Beecrowd](https://judge.beecrowd.com/pt/problems/view/2031)

# Solução

```
#include <iostream>
#include <string>

using namespace std;

string determinarVencedor(const string& jogador1, const string& jogador2) {
    if (jogador1 == "ataque") {
        if (jogador2 == "ataque") {
            return "Aniquilacao mutua";
        } else {
            return "Jogador 1 venceu";
        }
    } else if (jogador1 == "pedra") {
        if (jogador2 == "ataque") {
            return "Jogador 2 venceu";
        } else if (jogador2 == "pedra") {
            return "Sem ganhador";
        } else { // jogador2 é papel
            return "Jogador 1 venceu";
        }
    } else { // jogador1 é papel
        if (jogador2 == "ataque" || jogador2 == "pedra") {
            return "Jogador 2 venceu";
        } else { // jogador2 é papel
            return "Ambos venceram";
        }
    }
}

int main() {
    int N;
    cin >> N;
    string jogador1, jogador2;

    for (int i = 0; i < N; i++) {
        cin >> jogador1;
        cin >> jogador2;
        cout << determinarVencedor(jogador1, jogador2) << endl;
    }

    return 0;
}
```