# 1037 - Intervalo

Você deve fazer um programa que leia um valor qualquer e apresente uma mensagem dizendo em qual dos seguintes intervalos ([0,25], (25,50], (50,75], (75,100]) este valor se encontra. Obviamente se o valor não estiver em nenhum destes intervalos, deverá ser impressa a mensagem “Fora de intervalo”.

O símbolo ( representa "maior que". Por exemplo:
[0,25]  indica valores entre 0 e 25.0000, inclusive eles.
(25,50] indica valores maiores que 25 Ex: 25.00001 até o valor 50.0000000

[Intervalo - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1037)

# Solução

```
#include <iostream>
using namespace std;

int main() {
    
    double num; 
    cin >> num;
    
    // ([0,25], (25,50], (50,75], (75,100])
    
    if(num >= 0 && num <= 25)
        cout << "Intervalo [0,25]" << endl;
    else if(num > 25 && num <= 50) // Corrigido aqui
        cout << "Intervalo (25,50]" << endl;
    else if(num > 50 && num <= 75) // E aqui
        cout << "Intervalo (50,75]" << endl;
    else if(num > 75 && num <= 100) // E aqui
        cout << "Intervalo (75,100]" << endl;
    else
        cout << "Fora de intervalo" << endl;

    return 0;
}

```