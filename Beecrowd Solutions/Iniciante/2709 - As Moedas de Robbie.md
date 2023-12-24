# 2709 - As Moedas de Robbie

Robbie é um robô muito carismático, e uma das coisas que ele mais gosta de fazer, além de brincar com Glória, é colecionar moedas. Robbie possui várias moedas com valores iguais ou diferente, e de mesmo mesmo tamanho. e elas são guardadas de maneira organizada uma sobre a outra dentro de um cilindro de vidro. Robbie sempre faz um joguinho com Glória usando suas moedas quando ela pede pra brincar com ele de esconde-esconde, ou quando ela pede pra ele levá-la para passear. O jogo acontece da seguinte maneira: Glória escolhe um número N que será o salto das moedas que serão somadas, então a cada Nmoedas o valor Vi da moeda é somado até que não haja mais moedas, ou seja, Σ de ((VM-(N*0))+(VM-(N*1))+(VM-(N*2) )...), M é o número de moedas. Por exemplo, se existirem 5 moedas com os valores 1, 2 , 3, 4 e 5, e Glória escolher 2 como valor do salto, então serão somadas as moedas 5, 3 e 1, resultando em 9, ao final Robbie verifica se a soma dessas moedas é um número primo, se isso acontecer ele faz o que a Glória quer, caso contrário, a garotinha convence Robbie a jogar novamente, pois ela sempre consegue convencer ele de tudo, alegando que deixará de contar histórias pra ele, caso ele não faça a vontade dela.

Você como um bom programador da U.S. Robots, ajudará esses dois amigos, escrevendo um programa irá dizer o resultado do jogo.

[As Moedas de Robbie - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/2709)

# Solução

```
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n % 2 == 0) return n == 2;

    int root = sqrt(n);
    for (int i = 3; i <= root; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

bool solve(int qntd) {
    vector<int> vector(qntd);
    for (int i = 0; i < qntd; i++)
        cin >> vector[i];
    
    int gloria, sum = 0;
    cin >> gloria;
    for (int i = qntd - 1; i >= 0; i -= gloria)
        sum += vector[i];

    return isPrime(sum);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int qntd;
    while (cin >> qntd && qntd > 0) {
        if (solve(qntd)) {
            cout << "You’re a coastal aircraft, Robbie, a large silver aircraft." << endl;
            break;
        } else {
            cout << "Bad boy! I’ll hit you." << endl;
        }
    }

    return 0;
}
```