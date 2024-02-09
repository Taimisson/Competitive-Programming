# 1962 - Há Muito, Muito Tempo Atrás

Você deve escrever um programa que, dada uma série de número de anos transcorridos, mostre, para cada número, em que ano o evento aconteceu. Lembre-se de indicar se ele aconteceu A.C. (Antes de Cristo) ou D.C. (Depois de Cristo).

[Há Muito, Muito Tempo Atrás - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1962)

# Solução

```
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    while(n--){
        int x;
        cin >> x;
        
        if(x >= 2015)
        {
            x-= 2014;
            cout << abs(x) << " A.C." << endl;
        }
        else
        {
            x-= 2015;
            cout << abs(x) << " D.C." << endl;
        }
    }

    return 0;
}

```