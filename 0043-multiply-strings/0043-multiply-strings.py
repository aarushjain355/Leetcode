class Solution(object):
    def multiply(self, num1, num2):
        sum1 = 0
        sum2 = 0
        sum3 = 0
        for x in range(len(num1)):
            sum1 = sum1 * 10 + int(num1[x])
        for x in range(len(num2)):
            sum2 = sum2 * 10 + int(num2[x])
        print(sum1)
        print(sum2)
        sum3 = sum1 * sum2  
        return str(sum3)

        """
        :type num1: str
        :type num2: str
        :rtype: str
        """
        