# 1134 - Tipo de Combustível

Um Posto de combustíveis deseja determinar qual de seus produtos tem a preferência de seus clientes. Escreva um algoritmo para ler o tipo de combustível abastecido (codificado da seguinte forma: 1.Álcool 2.Gasolina 3.Diesel 4.Fim). Caso o usuário informe um código inválido (fora da faixa de 1 a 4) deve ser solicitado um novo código (até que seja válido). O programa será encerrado quando o código informado for o número 4.

[Tipo de Combustível - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1134)

# Solução

```
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int alcool = 0, gasolina = 0, diesel = 0; 
    while(true){
        int tipo; 
        cin >> tipo;
        switch(tipo){
            case 1: alcool++; break;
            case 2: gasolina++; break;
            case 3: diesel++; break;
            case 4: 
                cout << "MUITO OBRIGADO" << endl;
                cout << "Alcool: " << alcool << endl;
                cout << "Gasolina: " << gasolina << endl;
                cout << "Diesel: " << diesel << endl;
                return 0;
        }
    }
}
```