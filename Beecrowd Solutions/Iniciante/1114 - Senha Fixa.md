# 1114 - Senha Fixa

Escreva um programa que repita a leitura de uma senha até que ela seja válida. Para cada leitura de senha incorreta informada, escrever a mensagem "Senha Invalida". Quando a senha for informada corretamente deve ser impressa a mensagem "Acesso Permitido" e o algoritmo encerrado. Considere que a senha correta é o valor 2002. 

[Senha Fixa - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1114)

# Solução

```
#include <bits/stdc++.h>
using namespace std;

void solve(){
	int senha;

	while(true)
	{ 
		cin >> senha;

		if(senha == 2002){
			cout << "Acesso Permitido" << endl;
			break;
		}else
			cout << "Senha Invalida" << endl;
	}	
}
	

int main(){ 
	ios_base::sync_with_stdio(false);
    cin.tie(0);
	
	solve();
}```