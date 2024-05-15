# 1247 - Guarda Costeira

A Guarda Costeira pretende interceptá-lo, e sua embarcacão tem uma velocidade constante de VG nós. Supondo que ambas as embarcações partam da costa exatamente no mesmo instante, com uma distância de D milhas náuticas entre elas, será possível a Guarda Costeira alcançar o ladrão antes do limite de aguas internacionais?

Assuma que a costa da Nlogônia é perfeitamente retilínea e o mar bastante calmo, de forma a permitir uma trajetória tão retilínea quanto a costa.

[Guarda Costeira - Beecrowd](https://judge.beecrowd.com/pt/problems/view/1247)

# Solução

```
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int D, VF, VG;

    while (cin >> D >> VF >> VG) {
        double thief_time = 12.0 / VF;
        double guard_distance = sqrt(144 + D * D);
        double guard_time = guard_distance / VG;
        
        if (guard_time <= thief_time) {
            cout << "S" << endl;
        } else {
            cout << "N" << endl;
        }
    }

    return 0;
}

```
