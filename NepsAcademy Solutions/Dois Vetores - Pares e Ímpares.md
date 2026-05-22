# Dois Vetores: Pares e Ímpares

# Solução
```
#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> pares, impares;

    for(int i = 0; i < 10; i++){
        int x;
        cin >> x;
        if(x % 2 == 0){
            pares.push_back(x);
        }else{
            impares.push_back(x);
        }
    }

    for(int i = 0; i < pares.size(); i++){
        cout << pares[i] << " ";
    }

    cout << endl;

    for(int i = 0; i < impares.size(); i++){
        cout << impares[i] << " ";
    }

    return 0;
}

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
```