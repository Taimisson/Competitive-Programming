# Senha 2018

# Solução
```
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    int erros = 0;

    while(n != 2018){
        erros++;
        cin >> n;
    }

    cout << erros << endl;

    return 0;
}

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
```