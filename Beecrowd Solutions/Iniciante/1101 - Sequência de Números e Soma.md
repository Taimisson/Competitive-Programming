# 1101 - Sequência de Números e Soma

Leia um conjunto não determinado de pares de valores M e N (parar quando algum dos valores for menor ou igual a zero). Para cada par lido, mostre a sequência do menor até o maior e a soma dos inteiros consecutivos entre eles (incluindo o N e M).

[Sequência de Números e Soma - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1101)

```
#include <bits/stdc++.h>
using namespace std;

void solve(int m, int n){
		
	int sum = 0;

	if(m > n){
		int temp = m;
		m = n;
		n = temp;
	}
	for(int i = m; i <= n; i++){
		cout << i << " ";
		sum += i;
	}
	cout << "Sum=" << sum << "\n";

}

int main(){ 
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int m, n;
	
	while(true){
		cin >> m >> n;
		if(m < 1 || n < 1) break;

		solve(m, n);
	}

}```