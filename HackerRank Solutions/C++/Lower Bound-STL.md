# Lower Bound-STL

https://www.hackerrank.com/challenges/cpp-lower-bound/problem?isFullScreen=true

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
    vector<int> nums(n);
    for(int i = 0; i < n; i++)
        cin >> nums[i];
        
    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        auto it = lower_bound(nums.begin(), nums.end(), number);
        
        if(it != nums.end() && *it == number)
            cout << "Yes " << (it - nums.begin() + 1) << "\n";
        else 
            cout << "No " << (it - nums.begin() + 1 ) << "\n";
        
    }
    return 0;
}

```