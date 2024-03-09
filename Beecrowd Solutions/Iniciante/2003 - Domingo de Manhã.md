# 2003 - Domingo de Manhã

[Domingo de Manhã - Beecrowd](https://judge.beecrowd.com/pt/problems/view/2003)

# Solução

```
#include <iostream>
#include <sstream>

using namespace std;

int main() {
    string hora;

    while (cin >> hora) {
        int hora_bino, minuto_bino;
        sscanf(hora.c_str(), "%d:%d", &hora_bino, &minuto_bino);

        int atraso_maximo = 0;
        if (hora_bino < 7 || (hora_bino == 7 && minuto_bino == 0)) {
            atraso_maximo = 0;
        } else if (hora_bino == 7 && minuto_bino > 0) {
            atraso_maximo = minuto_bino;
        } else {
            atraso_maximo = (hora_bino - 7) * 60 + minuto_bino;
        }

        cout << "Atraso maximo: " << atraso_maximo << endl;
    }

    return 0;
}

```