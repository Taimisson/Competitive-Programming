# Preprocessor Solution

https://www.hackerrank.com/challenges/preprocessor-solution/problem?isFullScreen=true

# Solution

```
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define subtract(a, b) a-b

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++) { cin>>arr[i]; }
    sort(arr, arr+n);
    cout<<"Result = "<<subtract(arr[n-1], arr[0])<<endl;
    return 0;
}
```

