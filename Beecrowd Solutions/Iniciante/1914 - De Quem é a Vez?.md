# 1914 - De Quem é a Vez?

Entretanto a utilização desse método vem deixando o Quico louco, louco, louco... E por esse motivo ele pediu a sua ajuda! Solicitou a você um programa que dado o nome dos jogadores, suas respectivas escolhas PAR ou IMPAR e os números, informe quem foi o vencedor.

[De Quem é a Vez? - Beecrowd](https://judge.beecrowd.com/pt/problems/view/1914)

# Solução

```
#include <iostream>
#include <string>

using namespace std;

int main() {
    int qt, n, m;
    string jogador1, escolha1, jogador2, escolha2;

    cin >> qt;

    for(int i = 0; i < qt; i++) {
        cin >> jogador1 >> escolha1 >> jogador2 >> escolha2;
        cin >> n >> m;

        bool par = (n + m) % 2 == 0;
        if((par && escolha1 == "PAR") || (!par && escolha1 == "IMPAR")) {
            cout << jogador1 << endl;
        } else {
            cout << jogador2 << endl;
        }
    }

    return 0;
}


```