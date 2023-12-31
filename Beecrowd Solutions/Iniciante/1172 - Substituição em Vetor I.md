# 1172 - Substituição em Vetor I

Faça um programa que leia um vetor X[10]. Substitua a seguir, todos os valores nulos e negativos do vetor X por 1. Em seguida mostre o vetor X.

[Substituição em Vetor I - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1172)

# Solução

```
#include <bits/stdc++.h>
using namespace std;

int main(){ 
	ios_base::sync_with_stdio(false);
    cin.tie(0);
	
	vector<int> vetor(10);
	for(int i = 0; i < 10; ++i){
		int x;
		cin >> x;
		if(x < 1)
			x = 1;
		vetor[i] = x;
	}
	
	for(int i = 0; i < 10; ++i){
		cout << "X[" << i << "] = " << vetor[i] << "\n";
	}
}
```
