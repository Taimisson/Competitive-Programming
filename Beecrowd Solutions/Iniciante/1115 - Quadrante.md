# 1115 - Quadrante

Escreva um programa para ler as coordenadas (X,Y) de uma quantidade indeterminada de pontos no sistema cartesiano. Para cada ponto escrever o quadrante a que ele pertence. O algoritmo será encerrado quando pelo menos uma de duas coordenadas for NULA (nesta situação sem escrever mensagem alguma).

[Quadrante - Beecrowd](https://www.beecrowd.com.br/judge/pt/runs/code/37123117)

# Solução

```
#include <bits/stdc++.h>
using namespace std;

void solve(int x, int y){
	if(x > 0 && y > 0) cout << "primeiro" << endl;
	else if (x > 0 && y < 0) cout << "quarto" << endl;
	else if (x < 0 && y > 0) cout << "segundo" << endl;
	else cout << "terceiro" << endl;
}
	

int main(){ 
	ios_base::sync_with_stdio(false);
    cin.tie(0);
	
	int x, y;
	while(true){
		cin >> x >> y;
		if(x == 0 || y == 0)
			break;
		else
			solve(x, y);
	}
}
```