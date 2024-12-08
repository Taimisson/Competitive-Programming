# Busca Simples no Vetor 01

# Solução em C
```
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){    	
    int vetor[10], num;
	
	for(int i = 0; i < 10; i++)
		scanf("%d", &vetor[i]);
	
	scanf("%d", &num);
	
	bool encontrado = false;
	for(int i = 0; i < 10; i++)
		if(num == vetor[i]){
			printf("SIM");
			encontrado = true;
			break;
		}
	
	if(!encontrado)
		printf("NAO");

    return 0;
}

```
# Solução em C++
```
#include <iostream>
using namespace std;

int main(){
 	int vetor[10];
	
	for(int i = 0; i < 10; i++)
		cin >> vetor[i];
	
	int num;
	cin >> num;
	
	bool encontrado = false;
    for(int i = 0; i < 10; i++)
        if(num == vetor[i]){
            cout << "SIM";
            encontrado = true;
            break;
        }

    if(!encontrado)
        cout << "NAO";

    return 0;
}

```