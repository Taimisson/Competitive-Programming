# 2139 - Natal de Pedrinho

Entretanto, Pedrinho tem somente 9 anos e não tem noção alguma de programação, mas sabe que você, primo dele, mexe com "coisas de computador", e dessa forma, pediu para você escrever o programa para ele. Não somente isso, mas prometeu que deixaria você jogar todo final de semana e por quanto tempo quiser!

[Natal de Pedrinho - Beecrowd](https://judge.beecrowd.com/pt/problems/view/2139)

# Solução

```
#include <iostream>
using namespace std;

int diasParaONatal(int mes, int dia) {
    // Número de dias em cada mês de um ano bissexto
    int diasNosMeses[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 25};

    // Se já é Natal
    if (mes == 12 && dia == 25) 
        return 0;

    // Se já passou do Natal
    if (mes == 12 && dia > 25) 
        return -1;

    // Calcula os dias restantes no mês atual
    int diasRestantes = diasNosMeses[mes - 1] - dia;

    // Adiciona os dias dos meses restantes até dezembro
    for (int i = mes; i < 12; i++) 
        diasRestantes += diasNosMeses[i];
    
    return diasRestantes;
}

int main() {
    int mes, dia;

    while (cin >> mes >> dia) {
        int resultado = diasParaONatal(mes, dia);

        if (resultado == 0) cout << "E natal!" << endl;
        else if (resultado == 1) cout << "E vespera de natal!" << endl;
        else if (resultado < 0) cout << "Ja passou!" << endl;
        else cout << "Faltam " << resultado << " dias para o natal!" << endl;
    }

    return 0;
}

```