# 3089 - Presentes de Natal

Dona Ricota é uma senhora muito meticulosa. Como o natal está se aproximando ela quer distribuir pares de presentes para seus familiares.

Durante sua última viagem, Dona Ricota comprou 2n presentes para seus n netos. Cada presente custou xi reais (1 ≤ i ≤ 2n) e, para evitar conflitos, ela planeja formar os pares de presentes de modo a minimizar a diferença entre o valor total do par de presentes mais caro e o valor total do par mais barato.

Como você é uma pessoa gentil, Dona Ricota resolveu pedir sua ajuda para organizar os presentes.

[Presentes de Natal - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/3089)

# Solução

```
#include <bits/stdc++.h>
#include <iomanip>
#define ll long long

using namespace std;

void solve(int n, vector<int>& presentes) {
	int parCaro = 0, parBarato = INT_MAX;

	for(int i = 0; i < n; i++){
		int s = presentes[i] + presentes[2 * n - i - 1];
		parCaro = max(parCaro, s);
		parBarato = min(parBarato, s);
	}

	cout << parCaro << " " << parBarato << "\n";
}

int main() { 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
	int n;
	while(cin >> n && n > 0){
		vector<int> presentes(n * 2);
		
		for(int i = 0; i < n*2; i++)
			cin >> presentes[i];

		solve(n, presentes);
	}
}
```