# 2685 - A Mudança

Júlio está criando um novo Smart Watch especialmente para programadores. É impressionante as vantagens que ele oferece e o conforto pra codar que ele tem. O relógio ainda está em desenvolvimento e ele prometeu consertar os bugs e colocar uns apetrechos melhores e, em troca, pediu um sistema simples para o modo Standy Bay. O problema é que o relógio por si só sempre tem o ângulo de inclinação do Sol/Lua(de 0 a 360). Valendo um relógio, caso deseja aceitar: dada em grau da inclinação do Sol/Lua, informe em qual período do dia ele se encontra.

[A Mudança](https://judge.beecrowd.com/pt/problems/view/2685)

# Solução

```
#include <iostream>
using namespace std;

int main() {
    int M;
    while (cin >> M) {
        if (M == 360) M = 0;

        if (M >= 0 && M < 90) cout << "Bom Dia!!" << endl;
        else if (M < 180) cout << "Boa Tarde!!" << endl;
        else if (M < 270) cout << "Boa Noite!!" << endl;
        else if (M < 360) cout << "De Madrugada!!" << endl;
    }
    return 0;
}

```