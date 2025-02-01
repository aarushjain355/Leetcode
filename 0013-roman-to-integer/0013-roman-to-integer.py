class Solution(object):
    def romanToInt(self, s):
        
        dict = {
            "I" : 1,
            "V" : 5,
            "X" : 10,
            "L" : 50,
            "C" : 100,
            "D" : 500,
            "M" : 1000
        }

        roman_numeral = s
        skipped = False
        count = 0
        for x in range(len(roman_numeral)):
            
            if x < len(roman_numeral) - 1:
        
                if dict[roman_numeral[x + 1]] == dict[roman_numeral[x]]*5 or dict[roman_numeral[x + 1]] == dict[roman_numeral[x]]*10:
                
                    count += dict[roman_numeral[x + 1]] - dict[roman_numeral[x]]
                    skipped = True
            
                elif skipped:
                    skipped = False
            
                else:
                    #print("hello")
                    count += dict[roman_numeral[x]]
        
            else:
                if skipped == False:
                    count += dict[roman_numeral[x]]
        return count