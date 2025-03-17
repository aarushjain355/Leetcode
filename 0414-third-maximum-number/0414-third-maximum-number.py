class Solution(object):
    def thirdMax(self, nums):

        nums.sort()
        hashmap = {}
        counter = 0
        for x in range(len(nums) - 1, -1, -1):
            if nums[x] not in hashmap:
                hashmap[nums[x]] = 1
                counter += 1
            if counter == 3:
                return nums[x]
        
        return nums[len(nums)-1]

        """
        :type nums: List[int]
        :rtype: int
        """
        