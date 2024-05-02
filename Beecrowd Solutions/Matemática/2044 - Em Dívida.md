# 2044 - Em Dívida

Inês gostaria de saber quantas vezes ela vai ter que ir para a casa de Ignácio para pedir seu dinheiro. Para o cálculo, ela pode fornecer uma lista de preços dos ingressos para os N museus de ciência em Noglônia, na ordem em que ela e Ignácio vão visitá-los.

[2044 - Em Dívida](https://judge.beecrowd.com/pt/problems/view/2044)

# Solução

```
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;

    while (true) {
        cin >> N;
        if (N == -1) break; // Finaliza o programa quando a entrada for -1

        vector<int> prices(N);
        for (int i = 0; i < N; ++i) {
            cin >> prices[i];
        }

        int timesToClaim = 0;
        int debt = 0;

        for (int price : prices) {
            debt += price;
            if (debt % 100 == 0) {
                timesToClaim++;
                debt = 0; // Ela cobra a dívida, então a dívida é zerada
            }
        }

        cout << timesToClaim << endl;
    }

    return 0;
}
```