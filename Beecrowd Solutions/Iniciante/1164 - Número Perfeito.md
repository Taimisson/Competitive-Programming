# 1164 - Número Perfeito

Na matemática, um número perfeito é um número inteiro para o qual a soma de todos os seus divisores positivos próprios (excluindo ele mesmo) é igual ao próprio número. Por exemplo o número 6 é perfeito, pois 1+2+3 é igual a 6. Sua tarefa é escrever um programa que imprima se um determinado número é perfeito ou não.

[Número Perfeito - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1164)

# Solução

```
#include <bits/stdc++.h>
using namespace std;
	
void solve(int n){
	for(int i = 0; i < n; ++i){
		int x; 
		cin >> x;
		
		int sum = 0;
		for(int j = 1; j < x; ++j){
			if(x % j == 0)
				sum+= j;
		}
		if(sum == x)
			cout << x << " eh perfeito" << "\n";
		else
			cout << x << " nao eh perfeito" << "\n";
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