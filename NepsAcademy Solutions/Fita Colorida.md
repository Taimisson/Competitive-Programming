# Fita Colorida

# Solução
```
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> fitas;

    for(int i = 0; i < n; i++) {
        int fita;
        cin >> fita;
        fitas.push_back(fita);
    }

    vector<int> distancias(n, INT_MAX);

    int ultimaPosZero = -1;
    for(int i = 0; i < n; ++i){
        if(fitas[i] == 0){
            ultimaPosZero = i;
            distancias[i] = 0;
        }else if(ultimaPosZero != -1){
            distancias[i] = min(distancias[i], i - ultimaPosZero);
        }
    }

    ultimaPosZero = -1;
    for(int i = n-1; i >= 0; --i){
        if(fitas[i] == 0){
            ultimaPosZero = i;
        }else if(ultimaPosZero != -1){
            distancias[i] = min(distancias[i], ultimaPosZero - i);
        }
    }

    for (int i = 0; i < n; ++i) {
        if (distancias[i] > 9) {
            distancias[i] = 9;
        }
        cout << distancias[i] << " ";
    }

    cout << endl;


    return 0;
}


auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
```