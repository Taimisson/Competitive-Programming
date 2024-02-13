# 2235 - Andando no Tempo

Neste problema, dados os valores dos três créditos da máquina, seu programa deve dizer se é ou não possível viajar no tempo e voltar para o presente, fazendo pelo menos uma viagem e, no máximo, três viagens; sempre usando cada um dos três créditos no máximo uma vez.

[Andando no Tempo - Beecrowd](https://judge.beecrowd.com/pt/problems/view/2235)

# Solução

```
#include <iostream>

using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    // Verifica se algum crédito é igual a outro ou se a soma de dois é igual ao terceiro
    if (A == B || A == C || B == C || A + B == C || A + C == B || B + C == A) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }

    return 0;
}

```