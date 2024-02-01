# 1663 - Permutações Ambíguas

Alguns problemas de competições de programação são mesmo melindrosos: não apenas exigem um formato de saída diferente do que você podia esperar, mas também o exemplo de saída não mostra a diferença. Por exemplo, vejamos as permutações.
Uma permutação ambígua é uma permutação que não pode distinguida de sua permutação inversa. A permutação 1, 4, 3, 2, por exemplo, é ambígua, porque sua permutação inversa é a mesma. Para se livrar desses irritantes exemplos de casos de teste, você deve escrever um programa que detecta se a permutação dada é ambígua ou não.

[Permutações Ambíguas - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1663)

# Solução

```
#include <iostream>
#include <vector>

using namespace std;

int main() {
    while (true) {
        int n;
        cin >> n;

        if (n == 0) break;

        vector<int> perm(n + 1), inv_perm(n + 1);
        bool ambiguous = true;

        for (int i = 1; i <= n; ++i) {
            cin >> perm[i];
            inv_perm[perm[i]] = i;
        }

        for (int i = 1; i <= n; ++i) {
            if (perm[i] != inv_perm[i]) {
                ambiguous = false;
                break;
            }
        }

        cout << (ambiguous ? "ambiguous" : "not ambiguous") << endl;
    }

    return 0;
}
```