# Cartas

# Solução
```
#include <bits/stdc++.h>

using namespace std;

int main(){
    int A, B, C;
    cin >> A >> B >> C;

    unordered_map<int, int> map;

    map[A]++;
    map[B]++;
    map[C]++;

    for(auto pair : map)
        if(pair.second == 1) cout << pair.first << endl;

    return 0;
}
```