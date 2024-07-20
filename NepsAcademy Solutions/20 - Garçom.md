# Garçom

Escreva um programa que, dado o número de latas e copos em cada bandeja que o garçom tentou entregar, imprime o total de copos que ele quebrou.

# Solução
```
#include <iostream>

using namespace std;

int main(){
    int n, latas, copos, coposQuebrados = 0;

    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> latas >> copos;
        if(latas > copos) coposQuebrados += copos;
    }

    cout << coposQuebrados << endl;

    return 0;
}
```