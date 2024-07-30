# Submissão

# Solução
```
#include <iostream>

using namespace std;

int main(){
	int N; 
	cin >> N;
	
	int count = 0;
	string sequencia;
	for(int i = 0; i < N; i++){
		char digito;
		cin >> digito;
		sequencia += digito;
	}
	
	for(int i = 0; i < sequencia.length() - 2; i++){
		if(sequencia.substr(i, 3) == "100"){
			count++;		
		}
	}
	cout << count << endl;
	return 0;
}
```
