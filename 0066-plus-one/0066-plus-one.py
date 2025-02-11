class Solution(object):
    def plusOne(self, digits):
        n = len(digits) - 1
        while n >= 0:
            digits[n] = digits[n] + 1
            if digits[n] >= 10:
                digits[n] = 0
                if n == 0:
                    digits.insert(0, 1)
                
            else:
                break
            n = n - 1
        return digits

        """
        :type digits: List[int]
        :rtype: List[int]
        """
        