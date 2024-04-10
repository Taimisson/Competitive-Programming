# 1630 - Estacas

Marcos trabalha em uma empreiteira, sua tarefa é cercar com estacas os terrenos onde serão construidos prédios. Existem duas restrições para a distribuição destas estacas, elas devem ser colocadas de tal forma que a distância entre duas estacas seja sempre igual, e a segunda restrição é que Marcos deve usar o menor número possível de estacas. Marcos é seu amigo e pediu para que você desenvolva um programa para ajudá-lo.

[1630 - Estacas](https://judge.beecrowd.com/pt/problems/view/1630)

# Solução

```
#include <iostream>
using namespace std;

// Função para calcular o MDC (Máximo Divisor Comum) usando o algoritmo de Euclides
int mdc(int a, int b) {
    while(b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}

// Função para calcular o número mínimo de estacas necessário
int calcularEstacas(int x, int y) {
    int mdcValor = mdc(x, y);
    return 2 * (x / mdcValor + y / mdcValor);
}

int main() {
    int x, y;
    // Loop para ler as dimensões do terreno até o fim do arquivo
    while(cin >> x >> y) {
        cout << calcularEstacas(x, y) << endl;
    }
    return 0;
}
```
