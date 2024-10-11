# 1692A - Marathon

# Solution
```
#include <bits/stdc++.h>

using namespace std;

void marathon(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    int count = 0;
    
    if(b > a) count++;
    if(c > a) count++;
    if(d > a) count++;
    
    cout << count << endl;
}

int main(){
    
    int n;
    cin >> n;
    
    while(n--){
        marathon();
    }
    
    return 0;
}
```