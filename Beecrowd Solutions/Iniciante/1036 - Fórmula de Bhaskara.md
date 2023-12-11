# 1036 - Fórmula de Bhaskara

Leia 3 valores de ponto flutuante e efetue o cálculo das raízes da equação de Bhaskara. Se não for possível calcular as raízes, mostre a mensagem correspondente “Impossivel calcular”, caso haja uma divisão por 0 ou raiz de numero negativo.

[Fórmula de Bhaskara - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1036)

# Solução

```
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    
    double A, B, C;
    cin >> A >> B >> C;
    
    double raiz = (B * B) - 4 * A * C;
    
    if (A == 0 || raiz < 0) {
        cout << "Impossivel calcular" << endl;
    } else {
        double x1 = (-B + sqrt(raiz)) / (2 * A);
        double x2 = (-B - sqrt(raiz)) / (2 * A);
        
        cout << fixed << setprecision(5);
        cout << "R1 = " << x1 << endl;
        cout << "R2 = " << x2 << endl;
    }
    return 0;
}
```