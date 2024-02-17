# 1828 - Bazinga!

Embora a situação não se resolva no episódio (ambos escolhem Spock, resultando em um empate), não é difıcil deduzir o que aconteceria se a disputa continuasse. Caso Sheldon vencesse, ele se deleitaria com a vitória, exclamando "Bazinga!"; caso Raj vencesse, ele concluiria que "Raj trapaceou!"; caso o resultado fosse empate, ele exigiria nova partida: "De novo!". Conhecidas as personagens do jogo escolhido por ambos, faça um programa que imprima a provável reação de Sheldon.

[Bazinga! - Beecrowd](https://judge.beecrowd.com/pt/problems/view/1828)

# Solução

```
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    int T;
    cin >> T;

    map<string, map<string, bool>> winsAgainst;
    winsAgainst["tesoura"]["papel"] = true;
    winsAgainst["papel"]["pedra"] = true;
    winsAgainst["pedra"]["lagarto"] = true;
    winsAgainst["lagarto"]["Spock"] = true;
    winsAgainst["Spock"]["tesoura"] = true;
    winsAgainst["tesoura"]["lagarto"] = true;
    winsAgainst["lagarto"]["papel"] = true;
    winsAgainst["papel"]["Spock"] = true;
    winsAgainst["Spock"]["pedra"] = true;
    winsAgainst["pedra"]["tesoura"] = true;

    for (int i = 1; i <= T; ++i) {
        string sheldon, raj;
        cin >> sheldon >> raj;

        cout << "Caso #" << i << ": ";
        if (sheldon == raj) {
            cout << "De novo!" << endl;
        } else if (winsAgainst[sheldon][raj]) {
            cout << "Bazinga!" << endl;
        } else {
            cout << "Raj trapaceou!" << endl;
        }
    }

    return 0;
}

```