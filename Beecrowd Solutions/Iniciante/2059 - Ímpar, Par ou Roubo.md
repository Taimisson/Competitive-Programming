# 2059 - Ímpar, Par ou Roubo

Você foi contratado pela OIIPR (Organização Internacional de Ímpar, Par ou Roubo) para desenvolver um programa que dada a escolha do jogador 1 entre par ou ímpar, os números escolhidos como jogada e as ações dos jogadores (roubo/acusação) mostre quem foi o vencedor.

[Ímpar, Par ou Roubo - Beecrowd](https://judge.beecrowd.com/pt/problems/view/2059)

# Solução
```
#include <iostream>

using namespace std;

int main() {
    int p, j1, j2, r, a;
    cin >> p >> j1 >> j2 >> r >> a;

    if ((r == 1 && a == 0) || (r == 0 && a == 1))
        cout << "Jogador 1 ganha!" << endl;
    else if (r == 1 && a == 1)
        cout << "Jogador 2 ganha!" << endl;
    else if ((p == 0 && (j1 + j2) % 2 != 0) || (p == 1 && (j1 + j2) % 2 == 0))
        cout << "Jogador 1 ganha!" << endl;
    else
        cout << "Jogador 2 ganha!" << endl;

    return 0;
}

```