# Top K Elements in List

# Solution
```
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        for(auto n : nums) map[n]++;

        vector<pair<int, int>> arr;
        for(auto p : map) arr.push_back({p.second, p.first});

        sort(arr.rbegin(), arr.rend());

        vector<int> res;
        for(int i = 0; i < k; ++i){
            res.push_back(arr[i].second);
        }

        return res;
    }
};
```
