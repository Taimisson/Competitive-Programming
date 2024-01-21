# 2344 - Notas da Prova

Rosy é uma talentosa professora do Ensino Médio que já ganhou muitos prêmios pela qualidade de sua aula. Seu reconhecimento foi tamanho que foi convidada a dar aulas em uma escola da Inglaterra. Mesmo falando bem inglês, Rosy ficou um pouco apreensiva com a responsabilidade, mas resolveu aceitar a proposta e encará-la como um bom desafio.

[Notas da Prova - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/2344)

# Solução

```
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int nota;
    cin >> nota;
    
    if(nota == 0) cout << "E" << "\n";
    else if(nota <= 35) cout << "D" << "\n";
    else if(nota <= 60) cout << "C" << "\n";
    else if(nota <= 85) cout << "B" << "\n";
    else cout << "A" << "\n";

}
```