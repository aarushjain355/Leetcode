class Solution(object):
    def findRestaurant(self, list1, list2):

        hashmap = {}
        hashmap_list2 = {}
        current_sum = 10000000
        output_arr = []
        for x in range(len(list1)):
            hashmap[list1[x]] = x
        for y in range(len(list2)):
            if list2[y] in hashmap:
                if y + hashmap[list2[y]] == current_sum:
                    output_arr.append(list2[y])
                elif y + hashmap[list2[y]] < current_sum:
                    output_arr = []
                    output_arr.append(list2[y])
                    current_sum = y + hashmap[list2[y]]
                
        return output_arr
        """
        :type list1: List[str]
        :type list2: List[str]
        :rtype: List[str]
        """
        