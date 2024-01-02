# 1176 - Fibonacci em Vetor

Faça um programa que leia um valor e apresente o número de Fibonacci correspondente a este valor lido. Lembre que os 2 primeiros elementos da série de Fibonacci são 0 e 1 e cada próximo termo é a soma dos 2 anteriores a ele. Todos os valores de Fibonacci calculados neste problema devem caber em um inteiro de 64 bits sem sinal.

[Fibonacci em Vetor - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1176)

# Solução

Guardar os números de Fibonacci para não dar Time Limit Exceed 

```
#include <bits/stdc++.h>
using namespace std;

long long fib[61]; // Array to store Fibonacci numbers

void calculateFibonacci() {
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= 60; ++i) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    calculateFibonacci(); // Pre-calculate Fibonacci numbers

    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int x;
        cin >> x;
        cout << "Fib(" << x << ") = " << fib[x] << "\n";
    }
}
```