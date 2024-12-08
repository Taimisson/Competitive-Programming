# Irmãos

# Solução
```
#include <bits/stdc++.h>

using namespace std;

int main(){
    int irmaoMaisNovo, otavio;
    cin >> irmaoMaisNovo >> otavio;

    int diferencaMaisNovos = otavio - irmaoMaisNovo;
    int orlando =  diferencaMaisNovos + otavio;

    cout << orlando << endl;
    
    return 0;
}

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
```