# 2986 - Nem Tudo é Greve Versão Hard

Uma vez, enquanto estudavamos pra Maratona de Porgramção, Tobias e eu nos deparamos com um problema interesante, espero que vocês também gostem.

Existe uma escada com N degraus. Você pode escolher entre descer 1, 2, ou 3 degraus por vez a cada movimento. De quantas maneiras diferentes você poderia descer essa escada com N degraus?

[Nem Tudo é Greve Versão Hard](https://www.beecrowd.com.br/judge/pt/problems/view/2986)

# Solução

```
#include <iostream>
#define ll long long
using namespace std;

const int MOD = 1000000007;

int main() {
    int N;
    cin >> N;

    // Base cases
    ll a = 1, b = 1, c = 2, d;

    if (N == 1) {
        cout << a << endl;
        return 0;
    } else if (N == 2) {
        cout << c << endl;
        return 0;
    }

    // Calculate the number of ways
    for (int i = 3; i <= N; i++) {
        d = (a + b + c) % MOD;
        a = b;
        b = c;
        c = d;
    }

    cout << d << endl;
    return 0;
}
```