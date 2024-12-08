# Aprovado ou Reprovado

# Solução
```
#include <iostream>

using namespace std;

int main(){
    // Lendo a entrada do exercício
    double A, B;
    cin >> A >> B;
	
	double media = (A + B) / 2;
    if(media >= 7) cout << "Aprovado" << "\n";
	else if(media >= 4) cout << "Recuperacao" << "\n";
	else cout << "Reprovado" << "\n";
	
    return 0;
}
```