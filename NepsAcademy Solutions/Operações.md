# Operações

# Solution
```
#include <bits/stdc++.h>

using namespace std;

int main() {

    string operation;
    cin >> operation;

    double a, b;
    cin >> a >> b;

    if(operation == "M")
        cout << fixed << setprecision(2) << a * b << endl;
    else
        cout << fixed << setprecision(2) << a / b << endl;

}

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
```