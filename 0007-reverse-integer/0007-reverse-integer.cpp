class Solution {
public:
    int reverse(int x) {
        long long reverse_number = 0;
        int MIN = -1*2147483648;
        int MAX = 2147483647;
        while (x != 0) {
            reverse_number *= 10;
            reverse_number += (x % 10);
            if (reverse_number > MAX || reverse_number < MIN) {
                return 0;  // This would cause overflow
            }
            x -= (x % 10);
            x /= 10;
        }
        return reverse_number;
    }
};