class Solution(object):
    def generate(self, numRows):

        ## Data Structure: 2D Array
        ## Approach: for next row, add previous row index and index - 1

        output_arr = []
        for x in range(numRows):
            current_arr = []
            if x == 0:
                current_arr.append(1)
            else:
                for j in range(x + 1):
                    if j == 0 or j == x:
                        current_arr.append(1)
                    else:
                        current_arr.append(output_arr[x-1][j-1] + output_arr[x-1][j])
            
            output_arr.append(current_arr)
        return output_arr
                    


        """
        :type numRows: int
        :rtype: List[List[int]]
        """
        