# 2896 - Aproveite a Oferta

Um supermercado está fazendo uma promoção de venda de refrigerantes. Se um dia você comprar refrigerantes e levar os cascos vazios no dia seguinte, ela troca cada conjunto de K garrafas vazias  por uma garrafa cheia. Um cliente quer aproveitar ao máximo essa oferta e por isso comprou várias garrafas no primeiro dia da promoção. Agora ele quer saber quantas garrafas terá ao final do segundo dia da promoção, se usá-la ao máximo.

Faça um programa para calcular isso.

[Aproveite a Oferta - Beecrowd](https://judge.beecrowd.com/pt/runs/code/39689788)

# Solução

```
#include <iostream>
using namespace std;

int main() {
    int n, x, y;

    cin >> n;

    while (n--) {
        cin >> x >> y;

        int contador = 0;
        for (int i = x; i >= y; i -= y) ++contador;

        cout << contador + (x % y) << endl;
    }

    return 0;
}

```