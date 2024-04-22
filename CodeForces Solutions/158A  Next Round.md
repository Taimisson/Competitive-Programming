# 158A Next Round

https://codeforces.com/problemset/problem/158/A

# Solution

```
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    vector<int> scores(n);
    for(int i = 0; i < n; ++i)
        cin >> scores[i];

    int nextR = 0;
    for(int i = 0; i < n; ++i){
        if(scores[i] >= scores[k - 1] && scores[i] > 0)
            nextR++;
    }

    cout << nextR << "\n";
}
```