# 1113 - Crescente e Decrescente

Leia uma quantidade indeterminada de duplas de valores inteiros X e Y. Escreva para cada X e Y uma mensagem que indique se estes valores foram digitados em ordem crescente ou decrescente.

[Crescente e Decrescente - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1113)

# Solução

```
#include <bits/stdc++.h>
using namespace std;

void solve(int x, int y){
	if(x < y)
		cout << "Crescente" << "\n";
	else
		cout << "Decrescente" << "\n";
}

int main(){ 
	ios_base::sync_with_stdio(false);
    cin.tie(0);
	
	int x, y;

	while(true){
		cin >> x >> y;
		if(x == y)
			break;
		else
			solve(x, y);
	}
}
```