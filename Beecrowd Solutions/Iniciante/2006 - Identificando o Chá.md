# 2006 - Identificando o Chá

Degustação de chá às escuras é a habilidade de identificar um chá usando apenas seus sentidos do olfato e paladar.

Isto faz parte da Competição Ideal de Consumidores de Chá Puro (da sigla em inglês ICPC), que um programa de TV local está organizando. Durante o show, um bule de chá completo é preparado e são entregues uma xícara de chá para cada um dos cinco competidores. Os participantes devem cheirar, saborear e avaliar a amostra, de modo a identificar o tipo de chá, que pode ser: (1) o chá branco; (2) chá verde; (3) chá preto; ou (4) chá de ervas. No final, as respostas são verificadas para determinar o número de suposições corretas.

Dado o tipo de chá real e as respostas fornecidas, determinar o número de participantes que receberam a resposta correta.

[Identificando o Chá - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/2006)

```
#include <bits/stdc++.h>
using namespace std;

void solve(int n){
	int cont = 0;
	for(int i = 0; i < 5; ++i){
		int x;
		cin >> x;
		if(x == n)
			cont++;
	}
	cout << cont << endl;
}
	
int main(){ 
	ios_base::sync_with_stdio(false);
    cin.tie(0);
	
	int n;
	cin >> n;
	solve(n);
}
```