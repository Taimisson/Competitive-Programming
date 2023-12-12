# 1045 - Tipos de Triângulos

Leia 3 valores de ponto flutuante A, B e C e ordene-os em ordem decrescente, de modo que o lado A representa o maior dos 3 lados. A seguir, determine o tipo de triângulo que estes três lados formam, com base nos seguintes casos, sempre escrevendo uma mensagem adequada:
se A ≥ B+C, apresente a mensagem: NAO FORMA TRIANGULO
se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES

[Tipos de Triângulos - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1045)

# Solução

```
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    double numeros[3];
    double A, B, C;

    for(int i = 0; i < 3; i++)
        cin >> numeros[i];

    sort(numeros, numeros + 3);
    A = numeros[2];
    B = numeros[1];
    C = numeros[0];

    if(A >= B+C){
        cout << "NAO FORMA TRIANGULO" << endl;
        return 0; // Early return 
    }
    if((A * A) == (B * B + C * C))
        cout << "TRIANGULO RETANGULO" << endl;
    if((A * A) > (B * B + C * C))
        cout << "TRIANGULO OBTUSANGULO" << endl;
    if(A * A < B * B + C * C)
        cout << "TRIANGULO ACUTANGULO" << endl;
    if(A == B && B == C)
        cout << "TRIANGULO EQUILATERO" << endl;
    if(A == B && B != C || A == C && C != B || B == C && C != A)
        cout << "TRIANGULO ISOSCELES" << endl;

    return 0;
}
```