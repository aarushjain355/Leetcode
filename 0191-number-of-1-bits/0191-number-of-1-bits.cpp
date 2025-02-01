class Solution {
public:
    int hammingWeight(int n) {
        int num_of_ones = 0;
        while (n != 0) {
        
            if (n%2==1) {
                num_of_ones += 1;
            }
            n /= 2;
        }
        return num_of_ones;   
    }
};