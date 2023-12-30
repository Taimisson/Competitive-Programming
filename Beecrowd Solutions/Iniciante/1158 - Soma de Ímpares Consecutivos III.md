# 1158 - Soma de Ímpares Consecutivos III

Leia um valor inteiro N que é a quantidade de casos de teste que vem a seguir. Cada caso de teste consiste de dois inteiros X e Y. Você deve apresentar a soma de Y ímpares consecutivos a partir de X inclusive o próprio X se ele for ímpar. Por exemplo:
para a entrada 4 5, a saída deve ser 45, que é equivalente à: 5 + 7 + 9 + 11 + 13
para a entrada 7 4, a saída deve ser 40, que é equivalente à: 7 + 9 + 11 + 13

[Soma de Ímpares Consecutivos III - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1158)

# Solução

```
#include <bits/stdc++.h>
using namespace std;
	
void solve(int n){
	for(int i = 0; i < n; ++i){
		int x,y;
		cin >> x >> y;
	
		int sum = 0;
		int contador = 0;

		while(contador < y){ // Contador de Y
			if(x % 2 != 0){ // Verifica se é ímpar a partir de X
				sum += x; 
				contador++;
			}
			x++; // Próximo número
		}
		cout << sum << endl;
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