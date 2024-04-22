# 339B  Xenia and Ringroad

https://codeforces.com/problemset/problem/339/B

# Solution

```
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    
    vector<int> tasks(m);
    
    for(int i = 0; i < m; ++i)
        cin >> tasks[i];
        
    ll tempo = tasks[0] - 1;
    
    for(int i = 1; i < m; ++i)
        if(tasks[i] >= tasks[i - 1])
            tempo += tasks[i] - tasks[i - 1];
        else
            tempo += n - tasks[i - 1] + tasks[i];
            
    
    cout << tempo << endl;
    
    return 0;
}
```
