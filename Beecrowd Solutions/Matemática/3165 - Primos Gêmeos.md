# 3165 - Primos Gêmeos

Escreva um programa que dado um inteiro N, imprima os números primos gêmeos mais próximos menores ou iguais a N.

De acordo com a wikipedia, "Um primo gêmeo é um número primo que é 2 a menos ou 2 a mais que outro número primo - por exemplo, qualquer membro do par primo gêmeo (41, 43). Em outras palavras, um primo gêmeo é primo que tem um intervalo de dois ".

[Primos Gêmeos - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/3165)

# Solução

```
#include <iostream>
using namespace std;

bool is_prime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

pair<int, int> closest_twin_primes(int N) {
    if (N < 5) return {-1, -1};

    // Ajuste para garantir que N seja ímpar
    if (N % 2 == 0) N--;

    for (int num = N; num >= 3; num -= 2) {
        if (is_prime(num) && is_prime(num - 2)) {
            return {num - 2, num};
        }
    }
    return {-1, -1};
}

int main() {
    int N;
    cin >> N;

    pair<int, int> twins = closest_twin_primes(N);
    if (twins.first != -1) {
        cout << twins.first << " " << twins.second << endl;
    } else {
        cout << "Nenhum par de primos gêmeos encontrado." << endl;
    }

    return 0;
}
```