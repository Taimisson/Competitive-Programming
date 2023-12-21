# 1095 - Sequencia IJ 1

Você deve fazer um programa que apresente a sequencia conforme o exemplo abaixo.

I=1 J=60
I=4 J=55
I=7 J=50
...
I=? J=0

[Sequencia IJ 1 - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1095)

# Solução

```
#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    for(int i = 1, j = 60; j >= 0;i+=3, j-=5)
        cout << "I=" << i << " J=" << j << "\n";
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    solve();
    
    return 0;
}
```