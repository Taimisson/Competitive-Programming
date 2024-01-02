# 1175 - Troca em Vetor I

Faça um programa que leia um vetor N[20]. Troque a seguir, o primeiro elemento com o último, o segundo elemento com o penúltimo, etc., até trocar o 10º com o 11º. Mostre o vetor modificado.

[Troca em Vetor I - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1175)

# Solution I (First Approach)

```
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    vector<int> a(20);

    for(int i = 0; i < 20; ++i){
        cin >> a[i];
    }

    int i = 0;
    for(int j = 19; i < j; j--){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
    }

     for(i = 0; i < 20; ++i){
         cout << "N[" << i << "] = " << a[i] << "\n";
     }
}
```
# Solution II

Using the reverse function

```
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    vector<int> a(20);

    for(int i = 0; i < 20; ++i)
        cin >> a[i];

    reverse(a.begin(), a.end());

     for(int i = 0; i < 20; ++i)
         cout << "N[" << i << "] = " << a[i] << "\n";
}
```