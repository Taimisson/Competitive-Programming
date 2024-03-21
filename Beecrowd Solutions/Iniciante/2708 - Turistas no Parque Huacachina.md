# 2708 - Turistas no Parque Huacachina

A agência de turismo municipal da cidade de Ica, no Peru montou um posto de controle de jipes de aventura que sobem para as dunas do parque Hucachina. Como durante o dia, são vários os off-roads que sobem e descem do parque nacional, e nem sempre os turistas usam um mesmo transporte para a ida e volta, a prefeitura precisava ter um melhor controle e segurança sobre fluxo de visitantes no parque. Desenvolva um programa que receba como entrada se um jipe está entrando ou voltando do parque e a quantidade de turistas que este veículo está transportando. Ao final do turno, o programa deve indicar a quantidade de veículos e de turistas que ainda faltam regressar da aventura.

[Turistas no Parque Huacachina - Beecrowd](https://judge.beecrowd.com/pt/problems/view/2708)

# Solution

```
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    string s;
    int qntd;
    
    int contador = 0, saida = 0;
    while(true) {
        cin >> s;
        if(s == "ABEND") break;
        cin >> qntd; 
        
        if(s == "SALIDA") 
        {
            contador += qntd;
            saida++;
        }
        else if(s == "VUELTA") 
        {
            contador -= qntd;
            saida--;
        }
    }
    
    cout << contador << "\n" << saida << endl;
}

```

