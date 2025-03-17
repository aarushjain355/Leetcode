class Solution(object):
    def findPoisonedDuration(self, timeSeries, duration):
        second_counter = timeSeries[0]
        poison_time = 0
        for x in range(len(timeSeries)):
            if x == len(timeSeries) - 1:
                poison_time += duration
            else:
                if timeSeries[x] + duration <= timeSeries[x+1]:
                    poison_time += duration
                else:
                    poison_time += timeSeries[x+1] - timeSeries[x]

        return poison_time
        
        """
        :type timeSeries: List[int]
        :type duration: int
        :rtype: int
        """
        