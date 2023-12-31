# 1173 - Preenchimento de Vetor I

Leia um valor e faça um programa que coloque o valor lido na primeira posição de um vetor N[10]. Em cada posição subsequente, coloque o dobro do valor da posição anterior. Por exemplo, se o valor lido for 1, os valores do vetor devem ser 1,2,4,8 e assim sucessivamente. Mostre o vetor em seguida.

[Preenchimento de Vetor I - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1173)

# Solução

```
#include <bits/stdc++.h>
using namespace std;

int main(){ 
	ios_base::sync_with_stdio(false);
    cin.tie(0);
	
	vector<int> vetor(10);
	cin >> vetor[0];
	for(int i = 1; i < 10; ++i){
		vetor[i] = vetor[i - 1] * 2;
	}

	for(int i = 0; i < 10; ++i){
		cout << "N[" << i << "] = " << vetor[i] << "\n";
	}
}
```