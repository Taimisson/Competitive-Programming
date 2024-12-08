# Repetir X Vezes

# Solução em C

```
#include <stdio.h>
#include <stdlib.h>

int main(){    	
    int n;
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++)
		printf("NepsAcademy eh Sucesso");

    return 0;
}
```
# Solução em C++

```
#include <iostream>

using namespace std;

int main(){
    int n; 
	cin >> n;
	
	for(int i = 0; i < n; i++)
		cout << "NepsAcademy eh Sucesso" << endl;	
	
    return 0;
}
```