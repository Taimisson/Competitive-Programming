# 1793 - Escada Rolante

O dono do shopping local agora pediu sua ajuda. Escreva um algoritmo que, dados os tempos em que as pessoas se aproximaram da escada rolante, diga por quantos segundos a escada ficou ativada.

[Escada Rolante - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1793)

# Solução

```
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    while(cin >> n && n != 0){
        vector<int> tempos(n);
        for(int i = 0; i < n; ++i)
            cin >> tempos[i];

        int tempoAtivo = 10;
        for(int i = 1; i < n; ++i)
            if(tempos[i] - tempos[i - 1] < 10)
                tempoAtivo += tempos[i] - tempos[i - 1];
            else
                tempoAtivo+= 10;

        cout << tempoAtivo << "\n";
    }

}

```