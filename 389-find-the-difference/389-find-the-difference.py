class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        
        if len(s)==0:
            return t
        
        dicS = {}
        dicT = {}
        
        for c in s:
            if c not in dicS:
                dicS[c] = 0
            dicS[c]+=1
            
        for c in t:
            if c not in dicT:
                dicT[c] = 0
            dicT[c]+=1
            
        for key,value in dicT.items():
            if key not in dicS:
                return key
            elif dicS[key] != value:
                return key
        