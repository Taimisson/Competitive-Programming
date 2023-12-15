# 1064 - Positivos e Média

Leia 6 valores. Em seguida, mostre quantos destes valores digitados foram positivos. Na próxima linha, deve-se mostrar a média de todos os valores positivos digitados, com um dígito após o ponto decimal.

[Positivos e Média - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1064)

# Solução

```
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int count = 0;
    double media = 0;
    for(int i = 0; i < 6; i++){
        double num;
        cin >> num;
        if(num > 0){
            count++;
            media+= num;
        }
    }

    cout << fixed << setprecision(1);
    cout << count << " valores positivos" << endl;
    cout << media / count << endl;

    return 0;
}
```