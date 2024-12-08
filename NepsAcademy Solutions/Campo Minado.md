# Campo Minado

# Solução
```
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> v(n);
    vector<int> minasExplosivasPorPerto(n, 0);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    for(int i = 1; i <= n; ++i){
        if(v[i-1] == 1){
            minasExplosivasPorPerto[i-1]++;
            if(i-2 >= 0) // Se i-2 for menor que 0, não existe elemento anterior
                minasExplosivasPorPerto[i-2]++;
            if(i < n) // Se i for maior que n, não existe elemento posterior
                minasExplosivasPorPerto[i]++;

        }
    }

    for(int i = 0; i < n; i++){
        cout << minasExplosivasPorPerto[i] << endl;
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