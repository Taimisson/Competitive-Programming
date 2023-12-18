# 1074 - Par ou Ímpar

Leia um valor inteiro N. Este valor será a quantidade de valores que serão lidos em seguida. Para cada valor lido, mostre uma mensagem em inglês dizendo se este valor lido é par (EVEN), ímpar (ODD), positivo (POSITIVE) ou negativo (NEGATIVE). No caso do valor ser igual a zero (0), embora a descrição correta seja (EVEN NULL), pois por definição zero é par, seu programa deverá imprimir apenas NULL.

[Par ou Ímpar - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1074)

# Solução

```
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int num;
        cin >> num;

        if(num == 0)
            cout << "NULL" << "\n";
        else if(num > 0)
            if(num % 2 == 0)
                cout << "EVEN POSITIVE" << "\n";
            else
                cout << "ODD POSITIVE" << "\n";
        else if(num < 0)
            if(num % 2 == 0)
                cout << "EVEN NEGATIVE" << "\n";
            else
                cout << "ODD NEGATIVE" << "\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;

    while(t--){
        solve();
    }

    return 0;
}

```