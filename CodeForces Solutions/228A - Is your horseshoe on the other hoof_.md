# 228A	Is your horseshoe on the other hoof?

https://codeforces.com/problemset/problem/228/A

# Solution

```
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    set<int> colors;
    int color;

    for(int i = 0; i < 4; ++i){
        cin >> color;
        colors.insert(color);
    }

    int comprar = 4 - colors.size();

    cout << comprar << endl;

}

```