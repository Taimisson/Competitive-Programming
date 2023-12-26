# 1117 - Validação de Nota

Faça um programa que leia as notas referentes às duas avaliações de um aluno. Calcule e imprima a média semestral. Faça com que o algoritmo só aceite notas válidas (uma nota válida deve pertencer ao intervalo [0,10]). Cada nota deve ser validada separadamente.

[Validação de Nota - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1117)

# Solução

```
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

double readValidScore(istream& in) {
    double score;
    while (true) {
        in >> score;
        if (score >= 0 && score <= 10) return score;
        else cout << "nota invalida" << endl;
    }
}

void solve(istream& in) {
    double x = readValidScore(in);
    double y = readValidScore(in);
    
    cout << fixed << setprecision(2);
    cout << "media = " << (x + y) / 2 << endl;
}

int main() { 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    solve(cin);

    return 0;
}
```