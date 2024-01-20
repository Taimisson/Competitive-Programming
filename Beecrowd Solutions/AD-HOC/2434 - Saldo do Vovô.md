# 2434 - Saldo do Vovô

Vovô João tem uma banca de jornais; ele tem muitos clientes, e diariamente recebe muito dinheiro, mas também faz muitos pagamentos para manter o seu estoque de jornais e revistas. Todo dia ele vai ao banco realizar um depósito ou uma retirada de dinheiro. Em alguns dias, o saldo de sua conta no banco fica negativo, mas Vovô João tem um acordo com o banco que garante que ele somente é cobrado se o saldo for menor do que um valor pré-estabelecido.

Dada a movimentação diária da conta do banco do Vovô João, você deve escrever um programa que calcule o menor saldo da conta, no período dado.

[Saldo do Vovô - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/2434)

# Solução

```
#include <iostream>
using namespace std;

int main() {
    int N, S, transaction;
    cin >> N >> S;

    int minBalance = S; // Initialize minBalance to the starting balance

    for(int i = 0; i < N; i++) {
        cin >> transaction;
        S += transaction; // Update the balance
        minBalance = min(minBalance, S); // Update minBalance if the new balance is lower
    }

    cout << minBalance << endl; // Output the minimum balance
    return 0;
}

```