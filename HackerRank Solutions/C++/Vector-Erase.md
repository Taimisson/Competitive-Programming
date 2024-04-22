# Vector-Erase

https://www.hackerrank.com/challenges/vector-erase/problem?isFullScreen=true

# Solution

```
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    
    vector<int> vector;
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        vector.push_back(x);
    }
    
    int x, y, z;
    cin >> x;
    cin >> y >> z;
    
    vector.erase(vector.begin() + x - 1);
    vector.erase(vector.begin() + (y - 1), vector.begin() + (z - 1));
    
    cout << vector.size() << endl;
    for(int num : vector)
        cout << num << " ";

    return 0;
}

```