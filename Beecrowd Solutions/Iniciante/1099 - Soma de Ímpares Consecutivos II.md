# 1099 - Soma de Ímpares Consecutivos II

Leia um valor inteiro N que é a quantidade de casos de teste que vem a seguir. Cada caso de teste consiste de dois inteiros X e Y. Você deve apresentar a soma de todos os ímpares existentes entre X e Y.

[Soma de Ímpares Consecutivos II - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1099)

# Solução

```
#include <bits/stdc++.h>
using namespace std;

void solve(int n){
		
	for(int i = 0; i < n; i++){
		int x, y, sum = 0;
		cin >> x >> y;

		if(x > y){
			int temp;
			temp = x;
			x = y;
			y = temp;
		}

		for(int j = x + 1; j < y; j++){
			if(j % 2 != 0)
				sum+= j;
		}

		cout << sum << "\n";
	}

}

int main(){ 
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;

	solve(n);
}
```
