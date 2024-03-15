# 2176 - Paridade

Quando o destinatário recebe a mensagem S ele faz a contagem de bits de valor 1. Se a quantidade for par, significa que a mensagem chegou com sucesso. Caso contrário, significa que a mensagem sofreu uma alteração e não está correta.

Sua tarefa é escrever um algoritmo que faça a inserção do bit B na mensagem S, de forma que após a inserção a mensagem S tenha um número par de bits de valor 1.

[Paridade - Beecrowd](https://judge.beecrowd.com/pt/problems/view/2176)

# Solução

```
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    string s;
    cin >> s;
    
    
    int oneCount = 0;
    for(char c : s)
        if(c == '1')
            oneCount++;
            
    if(oneCount == 0 || oneCount % 2 == 0)
        s+= '0';
    else
        s+= '1';
        
    cout << s << endl;
    
}
```
