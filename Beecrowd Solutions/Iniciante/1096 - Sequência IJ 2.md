# 1096 - Sequencia IJ 2



[Sequência IJ 2 - Beecrowd]()

# Solução

```
#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    
    for(int i = 1; i < 10; i++)
        for(int j = 7; j >= 5; j--){
            cout << "I=" << i << " ";
            cout << "J=" << j << "\n";
        }
    
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    solve();
    
    return 0;
}
```