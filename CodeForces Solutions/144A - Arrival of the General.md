# 144A	Arrival of the General

https://codeforces.com/problemset/problem/144/A

# Solution

```
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> soldiers(n);
    for(int i = 0; i < n; i++) {
        cin >> soldiers[i];
    }

    int max_height = *max_element(soldiers.begin(), soldiers.end());
    int min_height = *min_element(soldiers.begin(), soldiers.end());

    int max_height_index = find(soldiers.begin(), soldiers.end(), max_height) - soldiers.begin();
    int min_height_index = find(soldiers.rbegin(), soldiers.rend(), min_height) - soldiers.rbegin();
    min_height_index = n - 1 - min_height_index;

    int seconds = max_height_index + (n - 1 - min_height_index);
    if (max_height_index > min_height_index) {
        seconds--; // Adjust if the tallest soldier is moved before the shortest one
    }

    cout << seconds << endl;

    return 0;
}

```