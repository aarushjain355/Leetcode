class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> unordered;
        for (int i = 0; i < nums.size(); i++) {
            if (unordered.find(nums[i]) != unordered.end()) {
                unordered[nums[i]] += 1;
            } else {
                unordered.insert({nums[i], 1});
            }
        }
        for (const auto& [key, value] : unordered) {
            if (value == 1) {
                return key;
            }
        }
        return -1;
    }
};