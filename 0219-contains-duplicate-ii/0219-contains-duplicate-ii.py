class Solution(object):
    def containsNearbyDuplicate(self, nums, k):
        hash_map = {}
        for x in range(len(nums)):
            if nums[x] in hash_map:

                if abs(hash_map[nums[x]] - x) <= k:
                    return True
                hash_map[nums[x]] = x
            else:
                hash_map[nums[x]] = x
        return False
        """
        :type nums: List[int]
        :type k: int
        :rtype: bool
        """
        