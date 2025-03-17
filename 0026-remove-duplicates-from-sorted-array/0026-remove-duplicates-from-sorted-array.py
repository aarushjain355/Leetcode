class Solution(object):
    def removeDuplicates(self, nums):

        if not nums:
            return 0
        
        # Pointer k will point to the last unique element's index
        k = 1  # Start from index 1 because index 0 is always unique

        # Traverse the list from index 1 to the end
        for i in range(1, len(nums)):
            if nums[i] != nums[i - 1]:  # Found a new unique element
                nums[k] = nums[i]  # Place it at the k-th position
                k += 1  # Increment the count of unique elements

        return k  # Return the number of unique elements
        """
        :type nums: List[int]
        :rtype: int
        """
        