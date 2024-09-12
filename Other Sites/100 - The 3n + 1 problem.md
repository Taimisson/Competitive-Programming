# 100	The 3n + 1 problem

# Solution
```
#include <bits/stdc++.h>

using namespace std;

// Time Complexity: O(log(n))
// Space Complexity: O(1)

int cycleLength(int n, int contador = 1){
    if(n == 1) return contador;
    if(n % 2 != 0) {
        return cycleLength(3 * n + 1, contador + 1);
    } else {
        return cycleLength(n / 2, contador + 1);
    }

}

int main() {
    int i, j;

    while(cin >> i >> j){
        int maxCycleLength = 0;
        int start = min(i, j);
        int end = max(i, j);

        for(int n = start; n <= end; n++){
            int cyLength = cycleLength(n);
            maxCycleLength = max(maxCycleLength, cyLength);
        }

        cout << i << " " << j << " " << maxCycleLength << endl;
    }
}


auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
```