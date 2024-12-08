# Positivo, Negativo ou Nulo

# Solução em C
```
#include <stdio.h>
#include <stdlib.h>

int main(){
    // Lendo a entrada do exercício
	int X;
	scanf("%d",&X);

    // Seu código vai aqui
	if(X > 0)
		printf("positivo");
	else if(X < 0)
		printf("negativo");
	else
		printf("nulo");	

	return 0;
}
```
# Solução em C++
```
#include <iostream>
using namespace std;

int main(){
    // Lendo a entrada do exercício
    int X;
    cin >> X;

    // Seu código vai aqui
	if(X > 0)
		cout << "positivo" << endl;
	else if(X < 0)
		cout << "negativo" << endl;
	else
		cout << "nulo" << endl;
	
    return 0;
}
```
