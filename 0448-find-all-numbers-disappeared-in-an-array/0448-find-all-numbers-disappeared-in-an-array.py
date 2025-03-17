class Solution(object):
    def findDisappearedNumbers(self, nums):
        ## Data Structure: Use Hashmap
        ## Key hashmap: value
        ## value hashmap: index
        hashmap = {}
        output_arr = []
        pos1 = 0
        pos2 = 0
        for i in range(len(nums)):
            hashmap[nums[i]] = 1
        for x in range(len(nums)):
            if x+1 not in hashmap:
                output_arr.append(x+1)
        return output_arr

            
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        