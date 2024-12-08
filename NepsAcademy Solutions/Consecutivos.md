# Consecutivos

# Solução
```
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int anterior;
    cin >> anterior;

    int contador = 1, maxCont = 1;
    for(int i = 0; i < n-1; i++){
        int actual;
        cin >> actual;
        if(actual == anterior) contador++;
        else{
            maxCont = max(maxCont, contador);
            contador = 1;
        }
        maxCont = max(maxCont, contador);

        anterior = actual;
    }

    cout << maxCont << endl;
    return 0;
}

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
```