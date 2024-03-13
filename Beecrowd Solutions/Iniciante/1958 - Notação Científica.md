# 1958 - Notação Científica

Você deve escrever um programa que, dado um número em ponto flutuante, mostre este número na notação científica: sempre mostre o sinal da mantissa; sempre mostre 4 casas decimais na mantissa; use o caractere 'E' para separar a mantissa do expoente; sempre mostre o sinal do expoente; e mostre o expoente com pelo menos 2 dígitos.

[Notação Científica - Beecrowd](https://judge.beecrowd.com/pt/problems/view/1958)

# Solução

```
#include <stdio.h>
int main()
{
    long double X;
    char s[120];
    scanf("%LE", &X);
    sprintf(s,"%LE", X);
    if(s[0] != '-') printf("+");
    printf("%.4LE\n", X);
    return 0;
}
```