# 469A	I Wanna Be the Guy

https://codeforces.com/problemset/problem/469/A

# Solution

```
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, p, q;
    cin >> n;
    set<int> levels;

    cin >> p;
    for(int i = 0; i < p; ++i){
        int level;
        cin >> level;
        levels.insert(level);
    }

    cin >> q;
    for(int i = 0; i < q; ++i){
        int level;
        cin >> level;
        levels.insert(level);
    }

    if(levels.size() == n)
        cout << "I become the guy." << "\n";
    else
        cout << "Oh, my keyboard!" << "\n";
}

```