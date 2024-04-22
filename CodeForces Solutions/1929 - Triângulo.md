# 1929 - Triângulo

Neste problema, você precisa ajudar Ana e suas amigas a determinar se, dados os comprimentos de quatro varetas, é ou não é possível selecionar três varetas, dentre as quatro, e formar um triângulo.

[Triângulo - Beecrowd](https://judge.beecrowd.com/pt/problems/view/1929)

# Solução

```
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int A, B, C, D;	
    cin >> A >> B >> C >> D;

    // formar um triangulo com 3 varetas dentro as 4
    if (A < B + C && B < A + C && C < A + B) {
        cout << "S" << endl;
    } else if (A < B + D && B < A + D && D < A + B) {
        cout << "S" << endl;
    } else if (A < C + D && C < A + D && D < A + C) {
        cout << "S" << endl;
    } else if (B < C + D && C < B + D && D < B + C) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }
    return 0;
}
```