# 1156 - Sequência S II

Escreva um algoritmo para calcular e escrever o valor de S, sendo S dado pela fórmula:
S = 1 + 3/2 + 5/4 + 7/8 + ... + 39/?

[Sequência S II - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1156)

# Solução

```
#include <bits/stdc++.h>
using namespace std;
	
int main(){ 
	ios_base::sync_with_stdio(false);
    cin.tie(0);
	
	double s = 1.0;
	double denominador = 2.0;

	for(int i = 3; i <= 39; i+=2){
		s+= (double) i / denominador;
		denominador *= 2;	
	}

	cout << fixed << setprecision(2) << s << endl;
}
```