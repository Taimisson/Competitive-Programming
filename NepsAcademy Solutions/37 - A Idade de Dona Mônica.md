# A Idade de Dona Mônica

# Solução
```
#include <bits/stdc++.h>

using namespace std;

int main(){
    int M, A, B;
    cin >> M >> A >> B;

    int filhoMaisVelho = M - A - B;
    
    if(filhoMaisVelho > A && filhoMaisVelho > B) filhoMaisVelho = filhoMaisVelho;
    else if(A > filhoMaisVelho && A > B) filhoMaisVelho = A;
    else filhoMaisVelho = B;

    cout << filhoMaisVelho << endl;
    
    return 0;
}

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
```