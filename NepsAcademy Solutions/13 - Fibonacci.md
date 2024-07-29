# Fibonacci 

# Solução em C
```
#include <stdio.h>
#include <stdlib.h>

int fib(int x){
	if(x == 0 || x == 1)
		return 1;
	
	return fib(x - 1) + fib(x - 2);
}

int main(){    	
    // Seu código vai aqui
	int a;
	scanf("%d", &a);
	
	printf("%d", fib(a));
	
    return 0;
}
```
# Solução em C++
```
#include <iostream>
using namespace std;

int fib(int n){
    if(n == 0 || n == 1)
        return 1;

    return fib(n-1) + fib(n-2);
}

int main()
{
    int a;
    cin >> a;
    
    cout << fib(a);

    return 0;
}

```