# 1149 - Somando Inteiros Consecutivos

Faça um algoritmo para ler um valor A e um valor N. Imprimir a soma de A + i para cada i com os valores (0 <= i <= N-1). Enquanto N for negativo ou ZERO, um novo N(apenas N) deve ser lido.

[Somando Inteiros Consecutivos - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1149)

# Solução

```
#include <iostream>
using namespace std;

int main() {
    int A, N, sum = 0;
    
    cin >> A >> N;
    
    while(N < 1)
        cin >> N;
    
    for(int i = 0; i < N; i++){
        sum += (A + i);
    }    
    cout << sum << "\n";
}
```