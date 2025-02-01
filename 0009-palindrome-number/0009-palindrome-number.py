class Solution(object):
    def isPalindrome(self, x):

        palindrome = False

        if x >= 0:
            num2 = x
            count = 0
            while x != 0:

                x = x//10
                count+=1
            power = count - 1
            val = True
            for i in range(count//2):
                
                if num2%10 != num2//10**power:
                    val = False
                
                num2 = num2%10**power
                num2 = num2//10
                power-=2
            if val:
                palindrome = True
        
        return palindrome