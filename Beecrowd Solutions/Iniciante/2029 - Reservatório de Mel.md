# 2029 - Reservatório de Mel

- Qual deve ser a altura(em cm) da parte interna do recipiente;

- A área(em cm2) da boca(entrada) do recipiente.

Obs.: Considere π = 3.14

[Reservatório de Mel - Beecrowd](https://judge.beecrowd.com/pt/problems/view/2029)

# Solution

```
#include <iostream>
#include <iomanip> // Para usar setprecision()
using namespace std;

int main() {
    double V, D; // Volumem e diâmetro
    const double pi = 3.14;

    // Configura a precisão das casas decimais para a saída
    cout << fixed << setprecision(2);

    // Lê os valores de entrada até o EOF (End Of File)
    while (cin >> V >> D) {
        double raio = D / 2.0;
        double area = pi * raio * raio;
        double altura = V / (pi * raio * raio);

        // Imprime os resultados
        cout << "ALTURA = " << altura << endl;
        cout << "AREA = " << area << endl;
    }

    return 0;
}

```