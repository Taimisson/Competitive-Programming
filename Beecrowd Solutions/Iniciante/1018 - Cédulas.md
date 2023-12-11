# 1018 - Cédulas

Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. A seguir mostre o valor lido e a relação de notas necessárias.

[Cédulas - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1018)

# Solução

```
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int x;
    cin >> x;

    cout << x << endl;

    int notas[] = {100, 50, 20, 10, 5, 2, 1};
    int qntdNotas;

    for(int valorNota : notas){
        qntdNotas = x / valorNota;
        x -= qntdNotas * valorNota;
        cout << qntdNotas << " nota(s) de R$ " << valorNota << ",00" << endl;
    }

    return 0;
}
```

