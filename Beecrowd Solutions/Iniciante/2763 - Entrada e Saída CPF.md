# 2763 - Entrada e Saída CPF

O seu professor gostaria de fazer um programa com as seguintes características:

Leia os dados de um CPF no formato XXX.YYY.ZZZ-DD;
Imprima os quatro números, sendo um valor por linha.


[Entrada e Saída CPF - Beecrowd](https://judge.beecrowd.com/pt/problems/view/2763)

# Solução

```
#include <iostream>
using namespace std;

int main() {
    string cpf;
    cin >> cpf; // Lê a entrada no formato XXX.YYY.ZZZ-DD

    // Extrai e imprime cada parte do CPF em uma nova linha
    cout << cpf.substr(0, 3) << "\n"  // XXX
         << cpf.substr(4, 3) << "\n"  // YYY
         << cpf.substr(8, 3) << "\n"  // ZZZ
         << cpf.substr(12, 2) << endl; // DD

    return 0;
}
```

