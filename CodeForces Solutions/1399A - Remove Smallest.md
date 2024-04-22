# 1399A - Remove Smallest

https://codeforces.com/problemset/problem/1399/A

# Solution

```
#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main()
{
    fastread();
    
    int t,n,a[55];
    cin >> t;
    
    while(t--){
        cin >> n;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        if(n == 1){
            cout << "YES" << endl;
            continue;
        }
        sort(a,a+n);
        vector<int> v;
        int dif = 0;
        for(int i=1; i<n; i++){
            dif = abs(a[i] - a[i-1]);
            v.push_back(dif);
        }
        sort(v.begin(), v.end(), greater<int>());

        if(v[0] > 1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }

    return 0;
}
```