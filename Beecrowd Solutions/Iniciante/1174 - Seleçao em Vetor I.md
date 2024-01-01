# 1174 - Seleçao em Vetor I

Faça um programa que leia um vetor A[100]. No final, mostre todas as posições do vetor que armazenam um valor menor ou igual a 10 e o valor armazenado em cada uma das posições.

[Seleçao em Vetor I - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1174)

# Solução

```
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cout << fixed << setprecision(1);
    vector<double> a(100); // vector
    for(int i = 0; i < 100; ++i){
        cin >> a[i]; 
        
        if(a[i] <= 10)
            cout << "A[" << i << "] = " << a[i] << "\n";
    }
    return 0;
}
```