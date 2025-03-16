class Solution(object):
    def lengthOfLongestSubstring(self, s):
        hashmap = {}
        count = 0
        max_count = 0
        countlist = []
        if s == " ":
            return 1
        for x in range(len(s)):
            if s[x] in hashmap:
                #print(count)
                if count > max_count:
                    max_count = count
                i = x
                hashmap.clear()
                while True:
                    if s[i] in hashmap:
                        break
                    hashmap[s[i]] = i
                    i-=1
                    
                count = x - i
               
            else:
                count += 1
                hashmap[s[x]] = x
            print(count)
            if x == len(s) - 1:
                
                if count > max_count:
                    max_count = count
        
        return max_count

        """
        :type s: str
        :rtype: int
        """
        