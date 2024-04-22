# Print Pretty

https://www.hackerrank.com/challenges/prettyprint/problem?isFullScreen=true

# Solution

```
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int T; // Número de casos de teste
    cin >> T;

    while(T--) {
        double A, B, C;
        cin >> A >> B >> C;

        // Processamento e saída para A
        cout << "0x" << hex << nouppercase << (long long)A << endl;

        // Processamento e saída para B
        // Nota: setw(15) define a largura do campo de saída como 15 caracteres
        // fixed e setprecision(2) controlam a precisão decimal
        cout << setw(15) << setfill('_') << right << showpos << fixed << setprecision(2) << B << endl;

        // Processamento e saída para C
        // Nota: setprecision(9) define a precisão decimal para 9 casas
        // scientific e uppercase formatam o número em notação científica com letras maiúsculas
        cout << scientific << uppercase << noshowpos << setprecision(9) << C << endl;
    }

    return 0;
}

```