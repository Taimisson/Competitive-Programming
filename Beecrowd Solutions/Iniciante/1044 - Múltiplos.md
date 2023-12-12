# 1044 - Múltiplos

Leia 2 valores inteiros (A e B). Após, o programa deve mostrar uma mensagem "Sao Multiplos" ou "Nao sao Multiplos", indicando se os valores lidos são múltiplos entre si.

[Múltiplos - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1044)

# Solução

```
#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    if(B % A == 0 || A % B == 0)
        cout << "Sao Multiplos" << endl;
    else
        cout << "Nao sao Multiplos" << endl;

    return 0;
}
```