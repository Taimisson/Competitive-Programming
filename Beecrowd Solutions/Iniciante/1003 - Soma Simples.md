# 1003 - Soma Simples

Leia dois valores inteiros, no caso para variáveis A e B. A seguir, calcule a soma entre elas e atribua à variável SOMA. A seguir escrever o valor desta variável.

[Soma Simples - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1003)

# Solução

```
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    cout << "SOMA = " << a+b << endl;
    return 0;
}
```