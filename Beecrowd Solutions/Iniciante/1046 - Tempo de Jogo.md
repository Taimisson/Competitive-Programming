# 1046 - Tempo de Jogo

Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo, sabendo que o mesmo pode começar em um dia e terminar em outro, tendo uma duração mínima de 1 hora e máxima de 24 horas.

[Tempo de Jogo - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1046)

# Solução

```
#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int horaInicial, horaFinal, duracao; 
    cin >> horaInicial >> horaFinal;
    
    if(horaInicial < horaFinal) // 10h 20h
        duracao = horaFinal - horaInicial; // 20h - 10h = 10h 
    else if(horaInicial > horaFinal) // 20h 10h
        duracao = (24 - horaInicial) + horaFinal; // 24h - 20h = 4 + 10h = 14h
    else
        duracao = 24;

    cout << "O JOGO DUROU " << duracao << " HORA(S)" << endl;
    
}
```