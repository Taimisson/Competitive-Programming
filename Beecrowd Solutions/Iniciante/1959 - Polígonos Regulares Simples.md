# 1959 - Polígonos Regulares Simples

Na geometria Euclidiana, um polígono regular é um polígono em que todos os ângulos são iguais e todos os lados tem o mesmo comprimento. Um polígono simples é aquele cujos segmentos de reta não se interceptam. Abaixo pode-se ver vários mosaicos feitos por polígonos regulares.

[Polígonos Regulares Simples - Beecrowd](https://judge.beecrowd.com/pt/problems/view/1959)

# Solução

```
#include <iostream>
#define ll long long
using namespace std;

int main() {
    long long N, L; // Use long long to handle large numbers up to 1000000 * 4000 without overflow.
    cin >> N >> L; // Read the number of sides (N) and the length of each side (L) from the input.

    ll perimeter = N * L; // Calculate the perimeter of the polygon.

    cout << perimeter << endl; // Print the perimeter.

    return 0;
}

```