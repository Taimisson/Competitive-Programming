# Garçom

# Solução
```
#include <iostream>

using namespace std;

int main(){
    int n, latas, copos, coposQuebrados = 0;

    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> latas >> copos;
        if(latas > copos) coposQuebrados += copos;
    }

    cout << coposQuebrados << endl;

    return 0;
}
```