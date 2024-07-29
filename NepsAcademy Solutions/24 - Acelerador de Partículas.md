# Acelerador de Partículas

# Solução
```
#include <bits/stdc++.h>

using namespace std;

int main(){
    int D;
    cin >> D;

    cout << (D - 5)%8 << endl;
    
    return 0;
}

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
```
