class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> indexes;
        vector<int> last_resort(2, -1);
        int low = 0;
        int high = nums.size() - 1;
        bool low_found = false;
        bool high_found = false;
        while ((low_found == false || high_found == false)) {
            if (high == -1 || low == nums.size()) {
                break;
            }
            if (nums.at(low) == target) {
                if (low_found == false) {
                    indexes.push_back(low);
                }
                low_found = true;               
            }
            if (nums.at(high) == target) {
                if (high_found == false) {
                    indexes.push_back(high);
                }
                high_found = true;                
            }
            low+= 1;
            high-= 1;
        }
        if (indexes.size() == 0) {
            return last_resort;
        }
        std::sort(indexes.begin(), indexes.end());
        return indexes;
    }
};