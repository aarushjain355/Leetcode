class Solution(object):
    def findShortestSubArray(self, nums):

        # Data structures used: Hash Table
        # Techniques used: sliding window
        # edge case: if there are two equal max frequency elements but spaced out differently
        ## Approach 1:
        ## need a way to keep track of poses
        ## 
        pos2 = 0
        max_frequency = 1
        frequency_map = {}
        position_map = {}
        element = 0
        if len(nums) == 0:
            return 0
        for x in range(len(nums)):
            
            if nums[x] in frequency_map:
                frequency_map[nums[x]] += 1
                if frequency_map[nums[x]] > max_frequency:
                    max_frequency = frequency_map[nums[x]]
                    pos2 = x
                    element = nums[x]
                elif frequency_map[nums[x]] == max_frequency:
                    print(x)
                    print(position_map[nums[x]])
                    print(pos2)
                    print(position_map[element])
                    if (pos2 - position_map[element]) > (x - position_map[nums[x]]):
                        pos2 = x
                        element = nums[x]
               
            else:
                position_map[nums[x]] = x
                frequency_map[nums[x]] = 1
        if max_frequency == 1:
            return 1
        return pos2 - position_map[element] + 1
            
        """
        :type nums: List[int]
        :rtype: int
        """
        