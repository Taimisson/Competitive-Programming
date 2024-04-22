# Sets-STL

https://www.hackerrank.com/challenges/cpp-sets/problem?isFullScreen=true

# Solution

```
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

set<int> s;

void add(int x) {
    s.insert(x);
}

void remove(int x) {
    s.erase(x);
}

bool isPresent(int x) {
    if(s.find(x) != s.end()) return true;
    else return false;
} 

int main() {
    int t;
    cin>>t;
    while(t--) {
        int y, x;
        cin>>y>>x;
        switch (y) {
            case 1: add(x); break;
            case 2: remove(x); break;
            case 3: (isPresent(x)) ? cout<<"Yes\n" : cout<<"No\n"; break;
            default: break;
        }
    }
    return 0;
}
```