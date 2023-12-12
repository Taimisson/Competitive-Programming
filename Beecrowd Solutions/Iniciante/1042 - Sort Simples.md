# 1042 - Sort Simples

Leia 3 valores inteiros e ordene-os em ordem crescente. No final, mostre os valores em ordem crescente, uma linha em branco e em seguida, os valores na sequência como foram lidos.

[Sort Simples - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1042)

# Solução

```
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int numeros[3];
    int original[3];

    for(int i = 0; i < 3; i++){
        cin >> numeros[i];
        original[i] = numeros[i];
    }

    sort(numeros, numeros + 3); // Aritmética de ponteiros

    for(int numero : numeros)
        cout << numero << endl;

    cout << endl;

    for(int numero : original)
        cout << numero << endl;

    return 0;
}
```