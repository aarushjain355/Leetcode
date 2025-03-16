class Solution(object):
    def strStr(self, haystack, needle):
        end_pos = 0
        start_pos = 0
        found = True
        for x in range(len(haystack)):
            if haystack[x] == needle[0]:
                found = True
                start_pos = x
                end_pos = x + len(needle) - 1
                print(start_pos)
                print(end_pos)
                counter = 0
                if end_pos <= len(haystack) - 1:
                    while start_pos <= end_pos:
                        if haystack[start_pos] != needle[counter] or haystack[end_pos] != needle[len(needle) - 1 - counter]:
                            found = False
                        start_pos += 1
                        end_pos -= 1
                        counter += 1
                    if found:
                        return x
        return -1
        """
        :type haystack: str
        :type needle: str
        :rtype: int
        """
        