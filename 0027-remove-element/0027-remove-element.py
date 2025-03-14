class Solution(object):
    def removeElement(self, nums, val):
        count = 0
        counter = 0
        indexes = []
        for i in range(len(nums)):
            if nums[i] != val:
                count += 1
            else:
                counter += 1
        for i in range(counter):
            nums.remove(val)
        return count

        """
        :type nums: List[int]
        :type val: int
        :rtype: int
        """
        