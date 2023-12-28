# 1146 - Sequências Crescentes

Este programa deve ler uma variável inteira X inúmeras vezes (deve parar quando o valor no arquivo de entrada for igual a zero). Para cada valor lido imprima a sequência de 1 até X, com um espaço entre cada número e seu sucessor.

Obs: cuide para não deixar espaço em branco após o último valor apresentado na linha ou você receberá Presentation Error.

[Sequências Crescentes - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1146)

# Solução
```
#include <iostream>
using namespace std;

int main() {
    int x;

    while (true) {
        cin >> x;
        if (x == 0)
            break;
    
        for (int i = 1; i < x; i++) 
            cout << i << " ";
            
        cout << x << endl; // Prints the last number and moves to a new line
    }
}
```