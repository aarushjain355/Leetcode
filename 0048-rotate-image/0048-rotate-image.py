class Solution(object):
    def rotate(self, matrix):

        distance_travelled = len(matrix) - 1
        points_transposed = {}

        for i in range(len(matrix)):
            for x in range(len(matrix[i])):
                if x*10+i not in points_transposed:
                    place_holder = matrix[x][i]
                    matrix[x][i] = matrix[i][x]
                    matrix[i][x] = place_holder
                    points_transposed[i*10+x] = 1

                if x == len(matrix[i]) - 1:
                    for y in range(len(matrix[i])/2):
                        place_holder = matrix[i][y]
                        matrix[i][y] = matrix[i][len(matrix[i]) - y - 1]
                        matrix[i][len(matrix[i]) - y - 1] = place_holder
        
        
        """
        :type matrix: List[List[int]]
        :rtype: None Do not return anything, modify matrix in-place instead.
        """
        