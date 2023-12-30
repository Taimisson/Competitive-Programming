# 1157 - Divisores I

Ler um número inteiro N e calcular todos os seus divisores.

[Divisores I - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1157)

# Solução
```
#include <bits/stdc++.h>
using namespace std;
	
int main(){ 
	ios_base::sync_with_stdio(false);
    cin.tie(0);
	
	int n;
	cin >> n;
	for(int i = 1; i <= n; ++i){
		if(n % i == 0)
			cout << i << "\n";
	}
}
```