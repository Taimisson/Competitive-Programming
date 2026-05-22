# Two Sum
Easy

Given an array of integers nums and an integer target, return the indices i and j such that nums[i] + nums[j] == target and i != j.

Time Complexity: O(n*n)

Space Complexity: O(1)

# Solution
```
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {}; // No solution found
    }
};
```
Time Complexity: O(n)

Space Complexity: O()

# One Pass Hash Table
```
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        int n = nums.size();

        for(int i = 0; i < n; ++i){
            int diff = target - nums[i];
            if(map.count(diff))
                return {map[diff], i};
            map[nums[i]] = i;
        }
        return {};
    }
};
```
