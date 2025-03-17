class Solution(object):
    def intersection(self, nums1, nums2):

        ## Data Structure: array
        ## Approach: use two pointer approach, at the end remove duplicates
        ## Function: Need to find common elements in both arrays

        hashmap_arr1 = {}
        arr = []
        for x in range(len(nums1)):
            if nums1[x] not in hashmap_arr1:
                hashmap_arr1[nums1[x]] = 0

        for x in range(len(nums2)):
            if nums2[x] in hashmap_arr1 and hashmap_arr1[nums2[x]] == 0:
                arr.append(nums2[x])
                hashmap_arr1[nums2[x]] = 1 

        return arr
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        