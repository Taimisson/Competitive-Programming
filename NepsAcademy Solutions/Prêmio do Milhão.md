# Prêmio do Milhão

# Solução
```
#include <bits/stdc++.h>

using namespace std;

int main(){
    int days = 0, n = 0, num, sum = 0;
    
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> num;
        sum += num;
        days++;
        
        if(sum >= 1000000) break;
    }
     
    cout << days << endl;

    return 0;
}
```