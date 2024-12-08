# Medalhas

# Solução
```
#include <bits/stdc++.h>

using namespace std;

int main(){
    int A,B,C;
    cin >> A >> B >> C;

    vector<pair<int, int>> jogadores;
    jogadores.push_back(make_pair(A, 1));
    jogadores.push_back(make_pair(B, 2));
    jogadores.push_back(make_pair(C, 3));

    sort(jogadores.begin(), jogadores.end());

    cout << jogadores[0].second << endl;
    cout << jogadores[1].second << endl;
    cout << jogadores[2].second << endl;
    return 0;
}

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
```