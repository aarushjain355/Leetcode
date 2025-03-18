class Solution(object):
    def findErrorNums(self, nums):

        output_arr = []
        compare = list(range(1, len(nums)+1))
        print(compare)
        hashmap = {}
        for x in range(len(nums)):
            if nums[x] not in hashmap:
                hashmap[nums[x]] = 1
                compare.remove(nums[x])
            else:
                output_arr.append(nums[x])
        for x in compare:
            output_arr.append(x)
        return output_arr
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        