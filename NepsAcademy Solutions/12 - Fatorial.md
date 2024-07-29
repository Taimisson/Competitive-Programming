# Fatorial


# Solução em C
```

#include <stdio.h>
#include <stdlib.h>

int fatorial(int x){
	if(x == 0 )
		return 1;
	
	return x * fatorial(x-1);
}

int main(){    	
    // Seu código vai aqui
	int a;
	scanf("%d", &a);
	
	printf("%d", fatorial(a));
	
    return 0;
}
```

# Solução em C++
```
#include <iostream>
using namespace std;

int fatorial(int n){
    if(n == 0) return 1;
    
    return n * fatorial(n-1);
}

int main()
{
    int a;
    cin >> a;

    cout << fatorial(a);

    return 0;
}
```