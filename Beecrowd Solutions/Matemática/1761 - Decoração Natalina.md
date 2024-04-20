# 1761 - Decoração Natalina

Considere para este desafio que o teodolito fica posicionado na altura de cada elfo e que essa altura precisa ser computada. O teodolito informará valores em graus. Utilize neste problema PI = 3.141592654.

[Decoração Natalina - Beecrowd](https://judge.beecrowd.com/pt/runs/code/39156455)

# Solução

```
#include <iostream>
#include <cmath>    // Para usar funções trigonométricas e M_PI
#include <iomanip>  // Para formatar a saída

using namespace std;

int main() {
    double A, B, C;  // A é o ângulo, B é a distância, C é a altura do elfo

    while (cin >> A >> B >> C) {  // Ler até EOF
        double radianos = A * (M_PI / 180.0);  // Converter ângulo de graus para radianos
        double alturaArvore = B * tan(radianos) + C;  // Calcular a altura total da árvore
        double cordoes = 5 * alturaArvore;  // Calcular a quantidade de cordões necessários

        // Imprimir a quantidade de cordão necessária, arredondando para duas casas decimais
        cout << fixed << setprecision(2) << cordoes << endl;
    }

    return 0;
}
```