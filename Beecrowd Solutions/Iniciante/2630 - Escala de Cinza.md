# 2630 - Escala de Cinza

Dadas as componentes RGB de um pixel da imagem colorida, determine o valor do pixel P da imagem em tons de cinza correspondente, determinada a conversão a ser utilizada. Despreze a parte decimal do resultado, caso exista.

[Escala de Cinza - Beecrowd](https://judge.beecrowd.com/pt/problems/view/2630)

# Solução
```
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T; // Number of test cases

    for (int t = 1; t <= T; t++) {
        string conversion;
        int R, G, B;
        cin >> conversion; // Read the type of conversion
        cin >> R >> G >> B; // Read RGB values

        int P; // Grayscale value
        if (conversion == "eye") {
            P = static_cast<int>(0.30 * R + 0.59 * G + 0.11 * B);
        } else if (conversion == "mean") {
            P = (R + G + B) / 3;
        } else if (conversion == "max") {
            P = max({R, G, B});
        } else if (conversion == "min") {
            P = min({R, G, B});
        }

        cout << "Caso #" << t << ": " << P << endl;
    }

    return 0;
}

```