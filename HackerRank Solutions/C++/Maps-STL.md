# Maps-STL

https://www.hackerrank.com/challenges/cpp-maps/problem?isFullScreen=true

# Solution

```
#include <bits/stdc++.h>
using namespace std;

map<string, int> mp;

void add(pair<string, int> p) {
    mp[p.first] += p.second;
}

void remove(string key){
    mp.erase(key);
}

void display(string key){
    if(mp.find(key) != mp.end())
        cout << mp[key] << "\n";
    else
        cout << "0\n";
}

int main() {
    int q;
    cin >> q;
    while(q--){
        int y, value;
        string key;
        cin >> y;
        switch (y) {
            case 1: cin >> key >> value; add(make_pair(key, value)); break;
            case 2: cin >> key; remove(key); break;
            case 3: cin >> key; display(key); break;
            default: break;
        }
    }
    
    return 0;
}

```