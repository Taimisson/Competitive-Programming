# 1061 - Tempo de um Evento

Pedrinho está organizando um evento em sua Universidade. O evento deverá ser no mês de Abril, iniciando e terminando dentro do mês. O problema é que Pedrinho quer calcular o tempo que o evento vai durar, uma vez que ele sabe quando inicia e quando termina o evento.

Sabendo que o evento pode durar de poucos segundos a vários dias, você deverá ajudar Pedrinho a calcular a duração deste evento.

[Tempo de um Evento](https://www.beecrowd.com.br/judge/pt/problems/view/1061)

# Solução
```
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int diaInicio, horaInicio, minutoInicio, segundoInicio;
    int diaFim, horaFim, minutoFim, segundoFim;
    string label; // Variável para armazenar a string "Dia" e os dois pontos durante a leitura

    // Leitura da data e hora de início
    cin >> label >> diaInicio;
    cin >> horaInicio >> label >> minutoInicio >> label >> segundoInicio;

    // Leitura da data e hora de fim
    cin >> label >> diaFim;
    cin >> horaFim >> label >> minutoFim >> label >> segundoFim;

    // Conversão de tudo para segundos
    int inicioSegundos = segundoInicio + minutoInicio * 60 + horaInicio * 3600 + diaInicio * 86400;
    int fimSegundos = segundoFim + minutoFim * 60 + horaFim * 3600 + diaFim * 86400;

    // Cálculo da duração do evento
    int duracao = fimSegundos - inicioSegundos;

    // Cálculo da quantidade de dias, horas, minutos e segundos
    int dias = duracao / 86400; duracao %= 86400;
    int horas = duracao / 3600; duracao %= 3600;
    int minutos = duracao / 60; duracao %= 60;
    int segundos = duracao;

    // Exibindo o resultado
    cout << dias << " dia(s)" << endl;
    cout << horas << " hora(s)" << endl;
    cout << minutos << " minuto(s)" << endl;
    cout << segundos << " segundo(s)" << endl;

    return 0;
}

```
