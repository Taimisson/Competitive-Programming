# 1043 - Triângulo

Leia 3 valores reais (A, B e C) e verifique se eles formam ou não um triângulo. Em caso positivo, calcule o perímetro do triângulo e apresente a mensagem:

Perimetro = XX.X

Em caso negativo, calcule a área do trapézio que tem A e B como base e C como altura, mostrando a mensagem

Area = XX.X

[Triângulo - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1043)

# Solução

```
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double A, B, C;
    cin >> A >> B >> C;

    cout << fixed << setprecision(1);
    if(A + B > C && A + C > B && B + C > A)
        cout << "Perimetro = " << A + B + C << endl;
    else
        cout << "Area = " << ((A + B) * C)/2 << endl;

    return 0;
}
```