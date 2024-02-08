# 1864 - Nossos Dias Nunca Voltarão

Nosso conselho é que você procure sempre aproveitar ao máximo cada momento, cada oficina, cada escola, cada treino, cada tempo de prática ou estudo em casa. Nossos dias nunca voltarão.

[Nossos Dias Nunca Voltarão - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1864)

# Solução

```
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string frase = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    int n;
    cin >> n;

    // LIFE IS NOT A PROBLEM TO BE SOLVED
    for(int i = 0; i < n; i++)
        cout << frase[i];
    cout << "\n";

    return 0;
}

```