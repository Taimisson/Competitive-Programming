# 230A	Dragons

https://codeforces.com/problemset/problem/230/A

# Solution

```
/******************************************************************************
2 2
1 99
100 0

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, n;
    cin >> s >> n;
    vector<pair<int, int>> dragons;
    
    for(int i = 0; i < n; ++i){
        int xi, yi;
        cin >> xi >> yi;
        dragons.push_back({xi, yi});
    }
    
    sort(dragons.begin(), dragons.end());
    
    for(int i = 0; i < n; ++i)
        if(s > dragons[i].first)
            s += dragons[i].second;
        else{
            cout << "NO" << endl;
            return 0;
        }
    
    
    cout << "YES" << endl;
    
    return 0;
}

```