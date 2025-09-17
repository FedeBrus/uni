class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numsSoFar;
        for (int i = 0; i < nums.size(); i++) {
            auto iter = numsSoFar.find(target - nums[i]);

            if (iter != numsSoFar.end()) {
                return {i, iter->second};
            }

            numsSoFar.insert({nums[i], i});
        }

        return {0, 0};   
    }
};
