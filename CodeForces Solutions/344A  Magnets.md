# 344A	Magnets

https://codeforces.com/problemset/problem/344/A

# Solution

```
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    int count = 1;
    string atual, anterior;
    cin >> anterior;
    for(int i = 1; i < n; ++i){
        cin >> atual;
        if(atual != anterior)
            count++;
        anterior = atual;
    }
    cout << count << "\n";
}

```