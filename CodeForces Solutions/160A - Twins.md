# 160A	Twins

https://codeforces.com/problemset/problem/160/A

# Solution

```
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> coins(n);
    int total = 0;

    for(int i = 0; i < n; ++i){
        cin >> coins[i];
        total += coins[i];
    }

    sort(coins.begin(), coins.end(), greater<int>());

    int minhaSoma = 0, moedas = 0;
    for(int i = 0; i < n; ++i){
        minhaSoma += coins[i];
        total -= coins[i];
        moedas++;
        if(minhaSoma > total) break;
    }

    cout << moedas << "\n";

    return 0;

}

```