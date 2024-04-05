# 3039 - Brinquedos do Papai Noel

Papai Noel todo ano lê as cartinhas de Natal para saber o que dar de presente para cada criança. O problema é que muitas crianças não mandam suas cartinhas para o Papai Noel. Então ele decidiu que, para poupar o seu tempo, ele irá dar o mesmo presente para crianças que não mandaram cartinhas. Assim, ele decidiu que para os meninos ele irá dar um carrinho de brinquedo e para as meninas, uma boneca.

[Brinquedos do Papai Noel - Beecrowd](https://judge.beecrowd.com/pt/problems/view/3039)

# Solução

```
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int carrinhos = 0, bonecas = 0;
    
    for(int i = 0; i < n; ++i){
        string name;
        char sexo;
        cin >> name >> sexo;
        
        if(sexo == 'M') carrinhos++;
        else bonecas++;
    }
    
    cout << carrinhos << " carrinhos" << endl;
    cout << bonecas << " bonecas" << endl;

    return 0;
}
```