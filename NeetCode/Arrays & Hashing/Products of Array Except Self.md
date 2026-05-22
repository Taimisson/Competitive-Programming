# Products of Array Except Self

# Solution
```
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> output(nums.size(), 0);
        for(int i = 0; i < nums.size(); ++i){
            int product = 1;
            
            for(int j = 0; j < nums.size(); ++j){
                if(i == j) continue;
                product *= nums[j];
            }
            output[i] = product;
        }
        return output;
    }
};
```