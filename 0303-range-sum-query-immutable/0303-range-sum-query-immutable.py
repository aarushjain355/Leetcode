class NumArray(object):

    def __init__(self, nums):
        self.nums = nums
        """
        :type nums: List[int]
        """       
    def sumRange(self, left, right):
        sum1 = 0
        for x in range(left, right + 1):
            sum1 += self.nums[x]
        return sum1
        """
        :type left: int
        :type right: int
        :rtype: int
        """
        


# Your NumArray object will be instantiated and called as such:
# obj = NumArray(nums)
# param_1 = obj.sumRange(left,right)