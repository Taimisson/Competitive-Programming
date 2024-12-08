# Fatorial

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