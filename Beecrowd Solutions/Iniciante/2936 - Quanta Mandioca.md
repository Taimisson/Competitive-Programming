# 2936 - Quanta Mandioca?

Dona chica por sua vez sempre come 225 gramas de mandioca. Cansada de todo ano ter que calcular quanta mandioca preparar ela contactou você para escrever um programa que informe quanta mandioca deve ser preparada em gramas.

[Quanta Mandioca? - Beecrowd](https://judge.beecrowd.com/pt/problems/view/2936)

# Solução

```
#include <iostream>
using namespace std;

int main() {
    int num_curupira, num_boitata, num_boto, num_mapinguari, num_iara;
    
    cin >> num_curupira >> num_boitata >> num_boto >> num_mapinguari >> num_iara;
    cout << num_curupira * 300 + num_boitata * 1500 + num_boto * 600 +
            num_mapinguari * 1000 + num_iara * 150 + 225 << endl;
    
    return 0;
}

```