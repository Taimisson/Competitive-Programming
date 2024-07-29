# Busca Simples no Vetor 02

# Solução em C
```
#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[10], x, contador = 0, indice[10], j = 0;
	
	for(int i = 0; i < 10; i++){
		scanf("%d", &vetor[i]);
	}
	
	scanf("%d", &x);
	
	for(int i = 0; i < 10; i++){
		if(x == vetor[i]){
			contador++;
			indice[j] = i;
			j++;
		}
	}
	
	if(contador > 0){
		printf("%d\n", contador);
		for(int i = 0; i < contador; i++)
			printf("%d ", indice[i]);
	}else{
		printf("Mia x");
	}

    return 0;
}

```

# Solução em C++
```
#include <iostream>
using namespace std;

int main(){
    int vetor[10], x, contador = 0, indice[10], j = 0;
	
	for(int i = 0; i < 10; i++){
		cin >> vetor[i];
	}
	
	cin >> x;
	
	for(int i = 0; i < 10; i++){
		if(x == vetor[i]){
			contador++;
			indice[j] = i;
			j++;
		}
	}
	
	if(contador > 0){
		cout << contador << endl;
		for(int i = 0; i < contador; i++)
			cout << indice[i] << " ";
	}else{
		cout << "Mia x";
	}

    return 0;
}
```