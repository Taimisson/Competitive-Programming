# Raízes

# Solution
```
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    while(n--){
        double x;
        cin >> x;

        cout << setprecision(4) << fixed << sqrt(x) << endl;
    }
}

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

```