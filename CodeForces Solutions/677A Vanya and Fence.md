# 677A	Vanya and Fence

https://codeforces.com/problemset/problem/677/A

# Solution

```
#include <bits/stdc++.h>
using namespace std;

void solve(int n, int fence){
    int count = 0, heigth;
    for(int i = 0; i < n; ++i){
        cin >> heigth;
        if(heigth <= fence)
            count++;
        else
            count+=2;
    }

    cout << count << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, fence;
    cin >> n >> fence;

    solve(n, fence);
}
```