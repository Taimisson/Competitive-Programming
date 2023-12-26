# 1116 - Dividindo X por Y

Escreva um algoritmo que leia 2 números e imprima o resultado da divisão do primeiro pelo segundo. Caso não for possível mostre a mensagem “divisao impossivel” para os valores em questão.

[Dividindo X por Y - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1116)

# Solução

```
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

void solve(int n){

	int x,y;
	cout << fixed << setprecision(1);
	for(int i = 0; i < n; i++){
		cin >> x >> y;
		if(y == 0)
			cout << "divisao impossivel" << endl;
		else
			cout << (double) x / y << endl;
	}
}
	

int main(){ 
	ios_base::sync_with_stdio(false);
    cin.tie(0);
	
	int n;
	cin >> n;
	solve(n);

}```