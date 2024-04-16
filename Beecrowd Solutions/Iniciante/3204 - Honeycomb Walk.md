# 3204 - Honeycomb Walk

A bee larva living in a hexagonal cell of a large honeycomb decides to creep for a walk. In each “step” the larva may move into any of the six adjacent cells and after n steps, it is to end up in its original cell.

Your program has to compute, for a given n, the number of different such larva walks.

[Honeycomb Walk - Beecrowd](https://judge.beecrowd.com/pt/problems/view/3204)

# Solução

```
#include <iostream>
#include <map>
#include <utility>

using namespace std;

const int moves[6][2] = {{1,0}, {-1,0}, {0,1}, {0,-1}, {1, -1}, {-1,1}};

int honeyCombWalk(int n){
    map<pair<int, int>, int> dp;
    dp[{0,0}] = 1;
    
    for(int step = 0; step < n; ++step){
        map<pair<int, int>, int> new_dp;
        for(auto p : dp){
            int x = p.first.first;
            int y = p.first.second;
            int count = p.second;
            for(int i = 0; i < 6; ++i){
                int new_x = x + moves[i][0];
                int new_y = y + moves[i][1];
                new_dp[{new_x, new_y}] += count;
            }
        }
        dp.swap(new_dp);
    }
    return dp[{0,0}];
}

int main(){

    int T, n;
    cin >> T;
    while(T--){
        cin >> n;
        cout << honeyCombWalk(n) << endl;
    }


    return 0;
}
```
