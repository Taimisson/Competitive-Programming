# 1021 - Notas e Moedas

Leia um valor de ponto flutuante com duas casas decimais. Este valor representa um valor monetário. A seguir, calcule o menor número de notas e moedas possíveis no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2. As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. A seguir mostre a relação de notas necessárias.

[Notas e Moedas - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1021)

# Solução

```
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double x;
    cin >> x;
    
    int notas[] = {100, 50, 20, 10, 5, 2};
    double moedas[] = {1, 0.50, 0.25, 0.10, 0.05, 0.01};
    
    cout << fixed << setprecision(2);

    // NOTAS
    cout << "NOTAS:" << endl;
    for(int valorNota : notas){ 
        int quantidadeNotas = int(x / valorNota);
        x -= quantidadeNotas * valorNota;
        cout << quantidadeNotas << " nota(s) de R$ " << valorNota << ".00" << endl;
    }
    
    // Ajuste de x para erros potenciais de arredondamento antes de processar as moedas
    x += 0.001; 
    
    // MOEDAS
    cout << "MOEDAS:" << endl;
    for(double valorMoeda : moedas){
        int quantidadeMoedas = int(x / valorMoeda);
        x -= quantidadeMoedas * valorMoeda;
        cout << quantidadeMoedas << " moeda(s) de R$ " << valorMoeda << endl;
    }
    
    return 0;
}
```