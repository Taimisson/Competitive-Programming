# Par ou Ímpar

# Solução
```
#include <iostream>

using namespace std;

int main(){
    // Lendo a entrada do exercício
    int B, C;
    cin >> B >> C;

    if((B + C) % 2 == 0) cout << "Bino" << "\n";
	else cout << "Cino" << "\n";

    return 0;
}
```