class Solution(object):
    def isValid(self, s):
        
        dict = {
            "," : ",",
            "(" : ")",
            "{" : "}",
            "[" : "]",
        }

        count = 0 
        valid = True
        open1 = [","]
        if len(s) % 2 == 0:

            for i in range(len(s)):

                if s[i] in dict:
                    open1.append(s[i])
                
                else:
                    if s[i] != dict[open1[-1]]:
                        valid = False
                
                    else:
                        open1.pop()
                    count+=1
            if count == 0 or len(open1) > 1:
                valid = False
        else:

            valid = False


        return valid