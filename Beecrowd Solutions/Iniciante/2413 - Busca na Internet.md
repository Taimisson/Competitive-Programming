# 2413 - Busca na Internet

João fez uma pesquisa em seu site de busca predileto, e encontrou a resposta que estava procurando no terceiro link listado. Além disso, ele viu, pelo site, que t pessoas já haviam clicado neste link antes. João havia lido anteriormente, também na Internet, que o número de pessoas que clicam no segundo link listado é o dobro de número de pessoas que clicam no terceiro link listado. Nessa leitura, ele também descobriu que o número de pessoas que clicam no segundo link é a metade do número de pessoas que clicam no primeiro link.

João está intrigado para saber quantas pessoas clicaram no primeiro link da busca, e, como você é amigo dele, quer sua ajuda nesta tarefa.

[Busca na Internet - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/2413)

# Solução

```
#include <bits/stdc++.h>
using namespace std;
	
int main(){ 
	ios_base::sync_with_stdio(false);
    cin.tie(0);
	
	int x; 
	cin >> x;
	cout << x * 4 << "\n";
}
```