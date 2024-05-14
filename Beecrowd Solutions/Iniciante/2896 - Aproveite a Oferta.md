# 2896 - Aproveite a Oferta

Um supermercado está fazendo uma promoção de venda de refrigerantes. Se um dia você comprar refrigerantes e levar os cascos vazios no dia seguinte, ela troca cada conjunto de K garrafas vazias  por uma garrafa cheia. Um cliente quer aproveitar ao máximo essa oferta e por isso comprou várias garrafas no primeiro dia da promoção. Agora ele quer saber quantas garrafas terá ao final do segundo dia da promoção, se usá-la ao máximo.

Faça um programa para calcular isso.

[Aproveite a Oferta - Beecrowd](https://judge.beecrowd.com/pt/runs/code/39689788)

# Solução

```
#include <iostream>
using namespace std;

int calcularGarrafa(int N, int K) {
    int total = N;
    while (N >= K) {
        int novas_garrafas = N / K;
        total += novas_garrafas;
        N = novas_garrafas + (N % K);
    }
    return total;
}

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; ++i) {
        int N, K;
        cin >> N >> K;
        cout << calcularGarrafa(N, K) << endl;
    }

    return 0;
}

```