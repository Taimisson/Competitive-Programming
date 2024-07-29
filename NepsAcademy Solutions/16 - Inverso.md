# Inverso

# Solução em C
```
#include <iostream>
using namespace std;

int main(){
    int vetor[10];
	
	for(int i = 0; i < 10; i++)
		scanf("%d", &vetor[i]);
	
	for(int i = 9; i >= 0; i--)
		printf("%d\n", vetor[i]);

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
	
	for(int i = 9; i >= 0; i--)
		cout << vetor[i] << endl;

    return 0;
}
```