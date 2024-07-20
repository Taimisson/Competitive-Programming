# Potências Simples

[Potências Simples](https://neps.academy/br/exercise/216)

# Solução
```
#include <iostream>

using namespace std;

int main(){
    int x;

    cin >> x;
    for(int i = 1; i <= x; ++i){
        if(x % i == 0) cout << i << " ";
    }

    return 0;
}
```