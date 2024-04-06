# 2861 - A Saída

Cacunda, Bizz e Massacote são amigos inseparáveis. Na faculdade, em alguns dias, não iam à aula para jogar truco. Certo dia, um professor estava passando perto deles. Na mesma hora, os três gritaram bem alto a palavra “gzuz”. Após esse grito, ficaram invisíveis, e o professor não os viu. Outra vez, a turma deles estava respondendo perguntas do professor. Quando era a vez de algum deles, respondiam com a palavra “gzuz”, e o professor aceitava como resposta e dava a nota máxima da pergunta. Faça a simulação da saída que eles encontraram para se safar dos mais diversos problemas.

[A Saída - Beecrowd](https://judge.beecrowd.com/pt/problems/view/2861)

# Solução

```
#include <iostream>
#include <string>

using namespace std;

int main() {
    int C; 
    cin >> C; 
    
    string question;
    cin.ignore();
    
    for(int i = 0; i < C; ++i) {
        getline(cin, question); 
        cout << "gzuz\n"; 
    }
    
    return 0;
}
```