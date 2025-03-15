class Solution(object):
    def missingNumber(self, nums):

        hash_table = {}
        for i in range(len(nums)):
            hash_table[nums[i]] = 1
        for i in range(len(nums) + 1):
            if i not in hash_table:
                return i
        """
        :type nums: List[int]
        :rtype: int
        """
        