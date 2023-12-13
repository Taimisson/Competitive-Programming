# 1047 - Tempo de Jogo com Minutos

Leia a hora inicial, minuto inicial, hora final e minuto final de um jogo. A seguir calcule a duração do jogo.

Obs: O jogo tem duração mínima de um (1) minuto e duração máxima de 24 horas.

[Tempo de Jogo com Minutos - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1047)

# Solução

```
#include <iostream>
using namespace std;

int main() {
    int horaInicial, minutoInicial, horaFinal, minutoFinal, duracaoH, duracaoM; 
    cin >> horaInicial >> minutoInicial >> horaFinal >> minutoFinal;
    
    // Calcula a duração em horas e minutos
    duracaoH = horaFinal - horaInicial;
    duracaoM = minutoFinal - minutoInicial;

    // Ajusta os minutos e as horas, se necessário
    if (duracaoM < 0) {
        duracaoM += 60;
        duracaoH--;
    }

    // Ajusta as horas se o jogo terminou no dia seguinte
    if (duracaoH < 0) {
        duracaoH += 24;
    }

    // Se a duração total for 0, o jogo durou 24 horas
    if (duracaoH == 0 && duracaoM == 0) {
        duracaoH = 24;
    }

    cout << "O JOGO DUROU " << duracaoH << " HORA(S) E " << duracaoM << " MINUTO(S)" << endl;
}
```