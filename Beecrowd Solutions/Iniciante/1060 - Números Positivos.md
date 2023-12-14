# 1060 - Números Positivos

Faça um programa que leia 6 valores. Estes valores serão somente negativos ou positivos (desconsidere os valores nulos). A seguir, mostre a quantidade de valores positivos digitados.

[](https://www.beecrowd.com.br/judge/pt/problems/view/1060)

# Solução

```
#include <iostream>
using namespace std;

int main(){
    int count = 0;
    for(int i = 0; i < 6; i++){
        double num;
        cin >> num;
        if(num > 0)
            count++;
    }
    cout << count << " valores positivos" << endl;
    return 0;
}
```