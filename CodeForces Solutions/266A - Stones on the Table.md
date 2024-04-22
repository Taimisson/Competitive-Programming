# 266A	Stones on the Table

https://codeforces.com/problemset/problem/266/A

# Solution

```
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, counter = 0;
    cin >> n;
    char anterior, atual;
    cin >> anterior;
    for(int i = 1; i < n; ++i) {
        char c;
        cin >> c;
        atual = c;
        if(atual == anterior)
            counter++;
        anterior = atual;
    }
    cout << counter << "\n";
}

```