# Tabuada

# Solução em C
```
#include <stdio.h>
#include <stdlib.h>

int main(){    	
    // Seu código vai aqui
	int n;
	scanf("%d", &n);
	
	for(int i = 1; i <= 10; i++)
		printf("%d * %d = %d", n, i, n*i);
        
    return 0;
}
```
# Solução em C++
```
#include <iostream>
using namespace std;

int main(){
    // Seu código vai aqui
	int n;
	cin >> n;
	
	for(int i = 1; i <= 10; i++)
		cout << n << " * " << i << " = " << i * n << endl;

    return 0;
}
```