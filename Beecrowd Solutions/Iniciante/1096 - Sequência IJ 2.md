# 1096 - Sequencia IJ 2

Você deve fazer um programa que apresente a sequencia conforme o exemplo abaixo.

I=1 J=7
I=1 J=6
I=1 J=5
I=3 J=7
I=3 J=6
I=3 J=5
...
I=9 J=7
I=9 J=6
I=9 J=5

[Sequência IJ 2 - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1096)

# Solução

```
#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    
    for(int i = 1; i < 10; i+=2)
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