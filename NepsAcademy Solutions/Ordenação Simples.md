# Ordenação Simples

# Solution
```_
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end()); // complexidade: O(n log n)

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
```