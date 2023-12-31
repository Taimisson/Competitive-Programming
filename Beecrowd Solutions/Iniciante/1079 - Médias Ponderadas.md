# 1079 - Médias Ponderadas

Leia 1 valor inteiro N, que representa o número de casos de teste que vem a seguir. Cada caso de teste consiste de 3 valores reais, cada um deles com uma casa decimal. Apresente a média ponderada para cada um destes conjuntos de 3 valores, sendo que o primeiro valor tem peso 2, o segundo valor tem peso 3 e o terceiro valor tem peso 5.

[Médias Ponderadas - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1079)

# Solução

```
#include <iostream>
#include <iomanip>
using namespace std;

void solve(int n){
    cout << fixed << setprecision(1);
    for(int i = 0; i < n; i++){
        double a,b,c;
        cin >> a >> b >> c;
        
        cout << (a * 2 + b * 3 + c * 5)/10 << "\n";
    }
}
int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);

    int n;
    cin >> n;

    solve(n);

    return 0;
}
```