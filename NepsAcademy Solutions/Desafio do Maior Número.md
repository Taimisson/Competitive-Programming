# Desafio do Maior Número

# Solução
```
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    vector<int> nums;
    cin >> n;

    nums.push_back(n);
    int maior = 0;

    while(n != 0){
        cin >> n;
        nums.push_back(n);
    }

    sort(nums.begin(), nums.end(), greater<int>());

    maior = nums[0];

    cout << maior << endl;

    return 0;
}

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
```