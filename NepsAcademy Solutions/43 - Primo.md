# Primo

# Solução
```
#include <bits/stdc++.h>

using namespace std;
bool eh_primo(int x){
    if(x <= 1) return false;

    if(x == 2) return true;

    if(x % 2 == 0) return false;

    for(int i = 3; i <= sqrt(x); i+= 2)
        if(x % i == 0) return false;

    return true;
}

int main(){
    int x;

    cin>>x;

    if(eh_primo(x)){
        cout << "S" << "\n";
    }else{
        cout << "N" << "\n";
    }
}

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
```