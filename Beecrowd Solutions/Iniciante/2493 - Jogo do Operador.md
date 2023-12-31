# 2493 - Jogo do Operador

Samu Elmito adora criar jogos peculiares para desafiar seus amigos. Desta vez, ele inventou um jogo chamado "Jogo do Operador", em que ele cria expressões básicas e cada jogador deve escolher uma expressão e preencher a lacuna com o operador correto para validá-la. Os jogadores poderão escolher operadores de somente três tipos: adição, subtração e multiplicação. Porém, se o jogador achar que não há operador entre os três tipos que valide a expressão, poderá responder Impossível.

Sua tarefa é simples: dadas as expressões e as respostas dos jogadores, determinar os jogadores que não passarão para a outra fase do jogo.

[Jogo do Operador - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/2493)

# Solução

```
#include <bits/stdc++.h>
using namespace std;

struct Expression {
    int X;
    int Y;
    int Z;
    
    Expression(int x, int y, int z) : X(x), Y(y), Z(z) {}

    // Verifica se a expressão é válida com o operador fornecido
    bool isValid(char oper) {
        switch(oper) {
            case '+': return X + Y == Z;
            case '-': return X - Y == Z;
            case '*': return X * Y == Z;
            default:  return !(X + Y == Z || X - Y == Z || X * Y == Z); // Tratamento para 'I'
        }
    }
};

void solve(int t) {
    vector<Expression> expressions;
    set<string> respostasErradas; // Armazenar jogadores com respostas erradas
    
    // Ler as expressões
    for(int i = 0; i < t; ++i) {
        int x, y, z;
        char sinalIgual;
        cin >> x >> y >> sinalIgual >> z;
        expressions.push_back(Expression(x, y, z));
    }

    for(int i = 0; i < t; ++i) {
        string nome;
        int exprIndex;
        char oper;
        cin >> nome >> exprIndex >> oper;
        
        if(!expressions[exprIndex - 1].isValid(oper))
            respostasErradas.insert(nome);
    }
    
    if(respostasErradas.empty())
        cout << "You Shall All Pass!\n";
    else if(respostasErradas.size() == t)
        cout << "None Shall Pass!\n";
    else {
        auto it = respostasErradas.begin();
        cout << *it; // Imprimir o primeiro nome
        ++it;
        for(; it != respostasErradas.end(); ++it) {
            cout << " " << *it; // Imprimir os nomes restantes com espaço na frente
        }
        cout << "\n";
    }
}

int main() { 
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    while(cin >> t)
        solve(t);
}
```