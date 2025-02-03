class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int> arr;
        for (int i = 0; i < matrix.size(); ++i) {
            for (int j = 0; j < matrix[i].size(); ++j) {
                arr.push_back(matrix[i][j]);
            } 
        }
        int low = 0;
        int high = arr.size();
        int mid = ((high + low) / 2);
        if (arr.size() == 2) {
            if (arr[0] == target || arr[1] == target) {
                return true;
            } else {
                return false;
            }
        }
         if (arr.size() == 1) {
            if (arr[0] == target) {
                return true;
            } else {
                return false;
            }
        }
        while (true) {
            if (arr[mid] < target) {
                if (mid == high || mid == low) {                   
                    return false;
                }
                low = mid;
            } else if (arr[mid] > target) {
                if (mid == high || mid == low) {
                    cout << arr[mid];
                    return false;
                }
                high = mid;
            } else {
                return true;
            }
            mid = ((high + low) / 2);            
        }
        return false;
    }
};