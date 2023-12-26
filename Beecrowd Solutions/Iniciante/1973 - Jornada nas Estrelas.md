# 1973 - Jornada nas Estrelas

Após comprar vários sítios adjacentes na região do oeste catarinense, a família Estrela construiu uma única estrada que passa por todos os sítios em sequência. O primeiro sítio da sequência foi batizado de Estrela 1, o segundo de Estrela 2, e assim por diante. Porém, o irmão que vive em Estrela 1 acabou enlouquecendo e resolveu fazer uma Jornada nas Estrelas para roubar carneiros das propriedades de seus irmãos. Mas ele está definitivamente pirado. Quando passa pelo sítio Estrela i, ele rouba apenas um carneiro daquele sítio (se o sítio tem algum) e segue ou para Estrela i + 1 ou para Estrela i - 1, dependendo se o número de carneiros em Estrela i era, respectivamente, ímpar ou par. Se não existe a Estrela para a qual ele deseja seguir, ele interrompe sua jornada. O irmão louco começa sua Jornada em Estrela 1, roubando um carneiro do seu próprio sítio.

[Jornada nas Estrelas - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1973)

# Solução

```
#include <bits/stdc++.h>
#include <iomanip>

#define ll long long

using namespace std;


void solve(int n, vector<int>& estrelas) {
	vector<bool> visitado(n, false);
	int i = 0, sitiosAtacados = 0;
	ll carneirosNaoRoubados = 0;
	
	while(i >= 0 && i < n){
		if(!visitado[i]){
			visitado[i] = true;
			sitiosAtacados++;
		}


		if(estrelas[i] > 0){
			bool ehImpar = estrelas[i] % 2 != 0;
			estrelas[i]--;
			if(ehImpar) i++;
			else i--;
		}else
			break;
	}

	for(int j = 0; j < n; j++){
		carneirosNaoRoubados += estrelas[j];
	}

	cout << sitiosAtacados << " " << carneirosNaoRoubados << endl;


}

int main() { 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
	int n;
	cin >> n;
	vector<int> estrelas(n);
    for(int i = 0; i < n; i++){
		cin >> estrelas[i];
	}
	solve(n, estrelas);

    return 0;
}
```