# 1118 - Várias Notas Com Validação

Escreva um programa para ler as notas da primeira e a segunda avaliação de um aluno. Calcule e imprima a média semestral. O programa só deverá aceitar notas válidas (uma nota válida deve pertencer ao intervalo [0,10]). Cada nota deve ser validada separadamente.

No final deve ser impressa a mensagem “novo calculo (1-sim 2-nao)”, solicitando ao usuário que informe um código (1 ou 2) indicando se ele deseja ou não executar o algoritmo novamente, (aceitar apenas os código 1 ou 2). Se for informado o código 1 deve ser repetida a execução de todo o programa para permitir um novo cálculo, caso contrário o programa deve ser encerrado.

[Várias Notas com Validação - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1118)

# Solução
```
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    double nota, soma, media;
    int contador, novo_calculo;

    do {
        soma = 0;
        contador = 0;

        while (contador < 2) {
            cin >> nota;
            if (nota >= 0.0 && nota <= 10.0) {
                soma += nota;
                contador++;
            } else 
                cout << "nota invalida" << endl;
        }
        
        media = soma / 2.0;
        cout << fixed << setprecision(2);
        cout << "media = " << media << endl;

        do {
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> novo_calculo;
        } while (novo_calculo != 1 && novo_calculo != 2);

    } while (novo_calculo == 1);

    return 0;
}

```