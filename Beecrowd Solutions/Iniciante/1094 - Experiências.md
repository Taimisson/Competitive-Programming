# 1094 - Experiências

Maria acabou de iniciar seu curso de graduação na faculdade de medicina e precisa de sua ajuda para organizar os experimentos de um laboratório o qual ela é responsável. Ela quer saber no final do ano, quantas cobaias foram utilizadas no laboratório e o percentual de cada tipo de cobaia utilizada.

Este laboratório em especial utiliza três tipos de cobaias: sapos, ratos e coelhos. Para obter estas informações, ela sabe exatamente o número de experimentos que foram realizados, o tipo de cobaia utilizada e a quantidade de cobaias utilizadas em cada experimento.

[Experiências - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1094)

# Solução

```
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

void solve(int n){
    int totalCobaias = 0, coelhos = 0, ratos = 0, sapos = 0;
    
    for(int i = 0; i < n; i++){
        int quantia;
        char tipo; 
        
        cin >> quantia >> tipo;
        
        totalCobaias+= quantia;
        if(tipo == 'C')
            coelhos+= quantia;
        else if(tipo == 'R')
            ratos+= quantia;
        else if(tipo == 'S')
            sapos+= quantia;
    }
    
    cout << "Total: " << totalCobaias << " cobaias" << "\n";
    cout << "Total de coelhos: " << coelhos << "\n";
    cout << "Total de ratos: "  << ratos << "\n";
    cout << "Total de sapos: "  << sapos << "\n";
    
    cout << fixed << setprecision(2);
    cout << "Percentual de coelhos: "  << (double) coelhos / totalCobaias * 100 << " %\n";
    cout << "Percentual de ratos: "  << (double) ratos / totalCobaias * 100 << " %\n";
    cout << "Percentual de sapos: " << (double) sapos / totalCobaias * 100 << " %\n";
    
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