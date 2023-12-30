# 1160 - Crescimento Populacional

Mariazinha quer resolver um problema interessante. Dadas as informações de população e a taxa de crescimento de duas cidades quaisquer (A e B), ela gostaria de saber quantos anos levará para que a cidade menor (sempre é a cidade A) ultrapasse a cidade B em população. Claro que ela quer saber apenas para as cidades cuja taxa de crescimento da cidade A é maior do que a taxa de crescimento da cidade B, portanto, previamente já separou para você apenas os casos de teste que tem a taxa de crescimento maior para a cidade A. Sua tarefa é construir um programa que apresente o tempo em anos para cada caso de teste.

Porém, em alguns casos o tempo pode ser muito grande, e Mariazinha não se interessa em saber exatamente o tempo para estes casos. Basta que você informe, nesta situação, a mensagem "Mais de 1 seculo.".

[Crescimento Populacional - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1160)

# Solução

```
#include <bits/stdc++.h>
using namespace std;
	
void solve(int n){
	int PA, PB;
	double G1, G2;

	for(int i = 0; i < n; ++i){
		cin >> PA >> PB >> G1 >> G2;

		int anos = 0;
		while(PA <= PB){
			PA *= 1 + G1 / 100;
			PB *= 1 + G2 / 100;
			anos++;

			if(anos > 100){
				cout << "Mais de 1 seculo." << "\n";
				break;
			}
		}

		if(anos <= 100)
			cout << anos << " anos." << "\n";
	}
}

int main(){ 
	ios_base::sync_with_stdio(false);
    cin.tie(0);
	
	int t;
	cin >> t;
	solve(t);
}
```