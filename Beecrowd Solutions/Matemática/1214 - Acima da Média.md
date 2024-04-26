# 1214 - Acima da Média

Sabe-se que 90% dos calouros tem sempre a expectativa de serem acima da média no início de suas graduações. Você deve checar a realidade para ver se isso procede.

[Acima da Média - Beecrowd](https://judge.beecrowd.com/pt/problems/view/1214)

# Solução

```
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int cases, n;
    cin >> cases;
    
    while(cases--){
        cin >> n;
        vector<int> notas(n);
        double totalNotas = 0; // Inicialize totalNotas com 0
        
        for(int i = 0; i < n; i++){
            cin >> notas[i];
            totalNotas += notas[i];
        }
        
        double media = totalNotas / n;
        int acimaMedia = 0;
        
        for(int nota : notas)
            if(nota > media)
                acimaMedia++;
        
        cout << fixed << setprecision(3) << static_cast<double>(acimaMedia) / n * 100 << "%" << endl;
    }
    return 0;
}
```