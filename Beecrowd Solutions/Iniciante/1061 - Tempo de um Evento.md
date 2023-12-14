# 1061 - Tempo de um Evento

Pedrinho está organizando um evento em sua Universidade. O evento deverá ser no mês de Abril, iniciando e terminando dentro do mês. O problema é que Pedrinho quer calcular o tempo que o evento vai durar, uma vez que ele sabe quando inicia e quando termina o evento.

Sabendo que o evento pode durar de poucos segundos a vários dias, você deverá ajudar Pedrinho a calcular a duração deste evento.

[Tempo de um Evento](https://www.beecrowd.com.br/judge/pt/problems/view/1061)

# Solução
```
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int diaInicio, horaInicio, minutoInicio, segundoInicio;
    int diaFim, horaFim, minutoFim, segundoFim;

    scanf("Dia %d", &diaInicio);
    scanf("%d : %d : %d", &horaInicio, &minutoInicio, &segundoInicio);
    scanf("Dia %d", &diaFim);
    scanf("%d : %d : %d", &horaFim, &minutoFim, &segundoFim);

    int inicioSegundos = segundoInicio + minutoInicio * 60 + horaInicio * 3600 + diaInicio * 86400;
    int fimSegundos = segundoFim + minutoFim * 60 + horaFim * 3600 + diaFim * 86400;
    int duracao = fimSegundos - inicioSegundos;

    int dias = duracao / 86400; duracao %= 86400;
    int horas = duracao / 3600; duracao %= 3600;
    int minutos = duracao / 60; duracao %= 60;
    int segundos = duracao;

    cout << dias << " dia(s)" << endl;
    cout << horas << " hora(s)" << endl;
    cout << minutos << " minuto(s)" << endl;
    cout << segundos << " segundo(s)" << endl;

    return 0;
}
```
