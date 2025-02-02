class Solution {
public:
    int integerReplacement(long n) {
        if (n == 1) {
            return 0;
        }
        if (n%2==0) {
            return integerReplacement(n/2)+ 1;
        } else {
            return std::min(integerReplacement(n + 1), integerReplacement(n - 1)) + 1;
        }
    
    }
};