# 1323 - Feynman

No mesmo guardanapo havia um desenho, que está reproduzido abaixo, mostrando que para N = 2, a resposta é 5.

[Feynman - Beecrowd](https://judge.beecrowd.com/pt/problems/view/1323)

# Solução

```
#include <iostream>
using namespace std;

long long total_quadrados(int N) {
    long long total = 0;
    for (int i = 1; i <= N; i++) {
        total += i * i;
    }
    return total;
}

int main() {
    int N;
    while (cin >> N && N != 0) {
        cout << total_quadrados(N) << endl;
    }
    return 0;
}

```
