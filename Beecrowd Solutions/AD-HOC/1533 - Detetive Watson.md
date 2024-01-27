# 1533 - Detetive Watson

John Watson, mesmo após anos trabalhando ao lado de Sherlock Holmes, nunca conseguiu entender como ele consegue descobrir quem é o assassino com tanta facilidade. Em uma certa noite, porém, Sherlock bebeu mais do que devia e acabou contando o segredo a John.

“Elementar, meu caro Watson”, disse Sherlock Holmes. “Nunca é o mais suspeito, mas sim o segundo mais suspeito”. Após descobrir o segredo, John decidiu resolver um crime por conta própria, só para testar se aquilo fazia sentido ou se era apenas conversa de bêbado.

Dada uma lista com N inteiros, representando o quanto cada pessoa é suspeita, ajude John Watson a decidir quem é o assassino, de acordo com o método citado.

[Detetive Watson - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1533)

# Solução

```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;

    while (true) {
        cin >> N;
        if (N == 0) break; // Encerra o loop se N for 0.

        vector<pair<int, int>> suspeitos; // Par de (suspeição, índice).

        for (int i = 0; i < N; ++i) {
            int suspeita;
            cin >> suspeita;
            suspeitos.push_back(make_pair(suspeita, i + 1)); // Índices começam em 1.
        }

        // Ordena os suspeitos em ordem decrescente de suspeita.
        sort(suspeitos.rbegin(), suspeitos.rend());

        // O segundo elemento da lista ordenada é o segundo mais suspeito.
        cout << suspeitos[1].second << endl;
    }

    return 0;
}

```