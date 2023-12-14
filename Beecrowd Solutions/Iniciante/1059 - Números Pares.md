# 1059 - Números Pares

Faça um programa que mostre os números pares entre 1 e 100, inclusive.

[Números Pares - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1059)

# Solução

```
#include <iostream>
using namespace std;

int main(){

    for(int i = 2; i < 101; i+=2)
        cout << i << endl;
    return 0;
}
```