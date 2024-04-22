# 996A Hit the Lottery

https://codeforces.com/problemset/problem/996/A

# Solution
```
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int bills[] = {100, 20, 10, 5, 1};
    int n;
    cin >> n;

    int contador = 0;
    for(int bill : bills)
        while(n >= bill){
            n-= bill;
            contador++;
        }

    cout << contador << endl;

}
```