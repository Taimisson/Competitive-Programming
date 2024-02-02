# 1743 - Máquina de Verificação Automatizada

Dadas as descrições de um par de conectores em linha, sua tarefa é determinar se os conectores são compatíveis.

[Máquina de Verificação Automatizada - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1743)

# Solução

```
#include <iostream>

using namespace std;

int main() {
    int conector1[5], conector2[5];
    bool saoCompatíveis = true;

    for (int i = 0; i < 5; ++i) 
        cin >> conector1[i];
    
    for (int i = 0; i < 5; ++i) 
        cin >> conector2[i];
    
    for (int i = 0; i < 5; ++i) 
        if (conector1[i] == conector2[i]) {
            saoCompatíveis = false;
            break;
        }
    
    if (saoCompatíveis) cout << "Y" << endl;
    else cout << "N" << endl;
    
    return 0;
}

```