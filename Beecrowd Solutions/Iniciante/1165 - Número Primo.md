# 1165 - Número Primo

Na matemática, um Número Primo é aquele que pode ser dividido somente por 1 (um) e por ele mesmo. Por exemplo, o número 7 é primo, pois pode ser dividido apenas pelo número 1 e pelo número 7.

[Número Primo - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1165)

# Solução

```
#include <bits/stdc++.h>
using namespace std;

bool primo(int n){
    if(n <= 1) return false;
    for(int i = 2; i <= sqrt(n); ++i){  // Change here: i <= sqrt(n)
        if(n % i == 0) return false;
    }
    return true;
}

void solve(int t){
	while(t--){
		int x;
		cin >> x;
		if(primo(x))
			cout << x << " eh primo" << "\n";
		else
			cout << x << " nao eh primo" << "\n";
	}			
}

int main(){ 
	ios_base::sync_with_stdio(false);
    cin.tie(0);
	
	int t;
	cin >> t;
	solve(t);
}
```
