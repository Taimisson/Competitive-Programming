# 2547 - Montanha-Russa

Para o dia da inauguração do parque, todos os convidados realizaram um pré-cadastro no qual indicaram sua altura. Para reduzir filas e otimizar a operação do parque no primeiro dia, você foi contratado para fazer um programa que dado o número de visitantes, altura mínima, altura máxima e as alturas de todos os visitantes, calcule quantas pessoas poderão andar na montanha-russa

[Montanha-Russa - Beecrowd](https://judge.beecrowd.com/pt/problems/view/2547) 

# Solution

```
#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n, alturaMin, alturaMax, contador, altura;
    
    while(cin >> n >> alturaMin >> alturaMax){
        contador = 0; // Inicializa o contador para cada caso de teste
        
        for(int i = 0; i < n; ++i){
            cin >> altura;
            if(altura >= alturaMin && altura <= alturaMax)
                contador++;
        }
        cout << contador << endl;
    }

    return 0;
}
```
