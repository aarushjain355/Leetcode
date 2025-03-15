class Solution(object):
    def reverse(self, x):   
        reversed_x = 0
        count = 0
        negative = False
        if x < 0:
            x = -1 * x
            negative = True
        while x > 0:
            reversed_x = reversed_x * 10 + (x % 10)
            print(reversed_x)
            x /= 10
        
        if reversed_x > 2**31 - 1:
            return 0
        if negative:
            reversed_x *= -1
        return reversed_x
        """
        :type x: int
        :rtype: int
        """
        