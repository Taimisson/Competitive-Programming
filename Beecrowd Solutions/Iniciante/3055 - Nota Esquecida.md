# 3055 - Nota Esquecida

João aprendeu na escola que a média de dois números é o valor da soma desses dois números dividido por dois. Ou seja, a média de dois números A e B é M = (A+B)/2 .

A professora contou para João as notas que ele tirou nas duas provas de Geografia. As duas notas são números inteiros entre 0 e 100. João prontamente calculou a média das duas provas, que também resultou em um número inteiro.

Mas João é muito esquecido, e agora não consegue lembrar-se das duas notas que tirou na prova. Ele consegue se lembrar de apenas uma das notas das provas. Por sorte, ele consegue se lembrar também da média entre as duas notas. Você pode ajudar

João a determinar a nota da outra prova?

# Solução

```
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int A, B, M;
    cin >> A >> M;
    
    // Média = (A + B) / 2
    // 2Media = A + B
    // 2Media - A = B
    B = 2 * M - A;
    
    cout << B << "\n";
}
```