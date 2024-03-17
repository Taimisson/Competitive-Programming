# 2221 - Batalha de Pomekons

Neste problema será dado a você o valor do bônus aplicado, os valores de ataque e defesa do Pomekon de Dabriel e Guarte e seus respectivos níveis, cabe a você informar o ganhador da batalha.

[Batalha de Pomekons - Beecrowd](https://judge.beecrowd.com/pt/problems/view/2221)

# Solução

```
#include <iostream>
using namespace std;

int calculaGolpe(int ataque, int defesa, int level, int bonus) {
    if (level % 2 == 0) {
        return (ataque + defesa) / 2 + bonus;
    } else {
        return (ataque + defesa) / 2;
    }
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int B;
        cin >> B;
        int ataqueD, defesaD, levelD;
        cin >> ataqueD >> defesaD >> levelD;
        int ataqueG, defesaG, levelG;
        cin >> ataqueG >> defesaG >> levelG;

        int golpeD = calculaGolpe(ataqueD, defesaD, levelD, B);
        int golpeG = calculaGolpe(ataqueG, defesaG, levelG, B);

        if (golpeD > golpeG) {
            cout << "Dabriel" << endl;
        } else if (golpeG > golpeD) {
            cout << "Guarte" << endl;
        } else {
            cout << "Empate" << endl;
        }
    }
    return 0;
}
```

