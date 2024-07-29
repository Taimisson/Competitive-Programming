# Flíper

# Solução
```
#include <iostream>

using namespace std;

int main(){
    // Lendo a entrada do exercício
    int A, B;
    cin >> A >> B;

    if(A == 0) cout << "C" << "\n";
	else if(A == 1 && B == 0) cout << "B" << "\n";
	else cout << "A" << "\n";

    return 0;
}
```