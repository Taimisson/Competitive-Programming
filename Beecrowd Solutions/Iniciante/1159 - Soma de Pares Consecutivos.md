# 1159 - Soma de Pares Consecutivos

O programa deve ler um valor inteiro X indefinidas vezes. (O programa irá parar quando o valor de X for igual a 0). Para cada X lido, imprima a soma dos 5 pares consecutivos a partir de X, inclusive o X , se for par. Se o valor de entrada for 4, por exemplo, a saída deve ser 40, que é o resultado da operação: 4+6+8+10+12, enquanto que se o valor de entrada for 11, por exempo, a saída deve ser 80, que é a soma de 12+14+16+18+20.

[Soma de Pares Consecutivos - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1159)

# Solução

```
#include <bits/stdc++.h>
using namespace std;
	
void solve(int x){
	int sum = 0;
	int contador = 0;

	while(contador < 5){
		if(x % 2 == 0){ // Verifica se é par a partir de X
			sum += x; 
			contador++;
		}
		x++; // Próximo número
	}
	cout << sum << endl;
	
}


int main(){ 
	ios_base::sync_with_stdio(false);
    cin.tie(0);
	
	int x;
	while(true){
		cin >> x;
		if(x == 0)
			break;
		else
			solve(x);
	}
}
```