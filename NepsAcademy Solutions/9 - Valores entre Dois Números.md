# Valores Entre Dois Números

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