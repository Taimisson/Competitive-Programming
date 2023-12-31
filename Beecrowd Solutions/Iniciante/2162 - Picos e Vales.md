# 2162 - Picos e Vales

Ao observar a paisagem da Nlogônia, o professor MC percebeu que a cada intervalo de 100 metros existe um pico. E que exatamente na metade de dois picos há um vale. Logo, a cada 50 metros há um vale ou um pico e, ao longo da paisagem, não há um pico seguido por outro pico, nem um vale seguido por outro vale.

O professor MC ficou curioso com esse padrão e quer saber se, ao medir outras paisagens, isso se repete. Sua tarefa é, dada uma paisagem, indicar se ela possui esse padrão ou não.

[Picos e Vales - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/2162)

# Solução

```
#include <bits/stdc++.h>
#include <iomanip>
#define ll long long
using namespace std;

void solve(int n){

	int altura, anterior;

	cin >> anterior;
	bool pico = false, vale = false, padrao = true;
	for(int i = 0; i < n - 1; ++i)
    {
		cin >> altura;
		if(altura > anterior && !pico)
        {
			pico = true;
			vale = false;
		}
        else if(altura < anterior && !vale)
        {
			pico = false;
			vale = true;
		}
        else
        {
			padrao = false;
			break;
		}
		anterior = altura;
	}

	cout << padrao << endl;
}

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;
	solve(n);
}
```