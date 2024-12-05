#include <bits/stdc++.h>

using namespace std;

const int N = 1000;

int main() {
    vector<int> a, b;
    for(int i = 0; i < N; ++i){
        int x, y;
        cin >> x >> y;
        a.push_back(x);
        b.push_back(y);
    }

    int ans = 0;
    map<int, int> freq;

    for(int x : b) freq[x]++;
    for(int x : a) ans += x * freq[x];

    cout << ans << endl;
}

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
