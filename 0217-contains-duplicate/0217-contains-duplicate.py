class Solution(object):
    def containsDuplicate(self, nums):
        hash_map = {}
        duplicate = False
        for x in nums:
            if x in hash_map:
                duplicate = True
                break
            else:
                hash_map[x] = 1
        return duplicate
        """
        :type nums: List[int]
        :rtype: bool
        """
        