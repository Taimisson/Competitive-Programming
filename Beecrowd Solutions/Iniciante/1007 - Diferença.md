# 1007 - Diferença

Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do produto de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D).

[Diferença - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1007)


# Solução

```
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a,b,c,d;
    cin >> a >> b >> c >> d;

    cout << fixed << setprecision(0);
    cout << "DIFERENCA = " << a * b - c * d << "\n";

    return 0;
}
```