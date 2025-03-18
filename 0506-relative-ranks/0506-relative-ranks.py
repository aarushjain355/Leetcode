class Solution(object):
    def findRelativeRanks(self, score):
        gold_rank = "Gold Medal"
        silver_rank = "Silver Medal"
        bronze_rank = "Bronze Medal"
        hashmap = {}
        output_arr = [0] * len(score)
        for x in range(len(score)):
            hashmap[score[x]] = x
        score_copy = score
        score_copy.sort()       
        for y in range(len(score_copy)):
            if y < len(score_copy) - 3:
                output_arr[hashmap[score_copy[y]]] = str(len(score_copy) - y)
            elif y == len(score_copy) - 3:
                output_arr[hashmap[score_copy[y]]] = bronze_rank
            elif y == len(score_copy) - 2:
                output_arr[hashmap[score_copy[y]]] = silver_rank
            else:
                output_arr[hashmap[score_copy[y]]] = gold_rank
        return output_arr
        

        """
        :type score: List[int]
        :rtype: List[str]
        """
        