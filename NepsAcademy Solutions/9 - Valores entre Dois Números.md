# Valores Entre Dois Números
        

# Solução em C
```
#include <stdio.h>
#include <stdlib.h>

int main(){    	
    int a, b;
	scanf("%d%d", &a, &b);
	
	if(a > b)
		for(int i = b; i <= a; i++)
			printf("%d ", i);
	else
		for(int i = a; i <= b; i++)
			printf("%d ", i);

    return 0;
}
```

# Solução em C++
```
#include <iostream>
using namespace std;

int main(){
    int A, B;
	cin >> A >> B;
	
    for(int i = min(A,B); i <= max(A,B); i++)
		cout << i << " ";

    return 0;
}

```