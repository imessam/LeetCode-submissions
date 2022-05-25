class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        l1 = len(word1)
        l2 = len(word2)
        
        c1 = 0
        c2 = 0
        
        res = ""
        
        while(c1 != l1 or c2 != l2):
            if c1 != l1:
                res+=word1[c1]
                c1+=1
            if c2 != l2:
                res+=word2[c2]
                c2+=1
        
        return res
        