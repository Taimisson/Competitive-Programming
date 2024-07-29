# Gangorra

# Solução
```
#include <iostream>

using namespace std;

int main(){
    // Lendo a entrada do exercício
    int P1, C1, P2, C2;
    cin >> P1 >> C1 >> P2 >> C2;

    int esquerda = C1 * P1;
	int direita = C2 * P2;
	
	if(esquerda == direita) cout << "0" << "\n";
	else if(esquerda > direita) cout << "-1" << "\n";
	else cout << "1" << "\n";

    return 0;
}
```