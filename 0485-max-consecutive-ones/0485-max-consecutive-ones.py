class Solution(object):
    def findMaxConsecutiveOnes(self, nums):
        max_n = 0
        current_max = 0
        previous_one = True
        for x in range(len(nums)):
            if nums[x] == 1:
                current_max += 1
            else:
                if current_max > max_n:
                    max_n = current_max
                current_max = 0
        if current_max > max_n:
            max_n = current_max
        return max_n
        """
        :type nums: List[int]
        :rtype: int
        """
        