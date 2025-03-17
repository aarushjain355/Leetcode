class Solution(object):
    def summaryRanges(self, nums):

        ## Data Structures: Array
        ## Approach: if a[n] = a[n-1] - 1 then approve make entry
        ##           else 
        ## Issue: Need a way to keep track of first range element
        ## Soln: Use an array

        string = ""
        output_arr = []
        first_pos = 0
        start = True
        for x in range(len(nums)):
            string = ""
            if x < len(nums) - 1:
                if nums[x] + 1 == nums[x+1] and start:
                    first_pos = x
                    start = False
                elif nums[x] + 1 != nums[x+1]:
                    if first_pos == x:
                        
                        string += str(nums[x])
                    else:
                        string += str(nums[first_pos])
                        string += "-"
                        string += ">"
                        string += str(nums[x])
                    first_pos = x + 1
                    start = True
                    output_arr.append(string)
            else:
                if first_pos == x:
                    string += str(nums[x])
                else:
                    string += str(nums[first_pos])
                    string += "-"
                    string += ">"
                    string += str(nums[x])
                output_arr.append(string)

        return output_arr
        """

        :type nums: List[int]
        :rtype: List[str]
        """
        