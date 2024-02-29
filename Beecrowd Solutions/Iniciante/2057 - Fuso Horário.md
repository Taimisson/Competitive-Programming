# 2057 - Fuso Horário

Por exemplo, se eles partiram às 10 horas da manhã para uma viagem de 4 horas rumo a um destino que fica à leste, em um fuso horário com uma hora a mais com relação ao fuso horário do ponto de partida, a hora de chegada terá que ser: 10 horas + 4 horas de viagem + 1 hora de deslocamento pelo fuso, ou seja, chegarão às 15 horas. Note que se a hora calculada for igual a 24, seu programa deverá imprimir 0 (zero).

[Fuso Horário - Beecrowd](https://judge.beecrowd.com/pt/problems/view/2057)

# Solução

```
#include <iostream>

using namespace std;

int main() {
    int S, T, F;
    cin >> S >> T >> F; 

    int horaChegada = S + T + F;

    // Ajusta a hora de chegada para o formato de 24 horas
    if (horaChegada >= 24) horaChegada -= 24;
    else if (horaChegada < 0) horaChegada += 24;

    cout << horaChegada << endl;

    return 0;
}

```