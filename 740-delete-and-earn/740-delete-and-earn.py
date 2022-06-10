class Solution:
    def deleteAndEarn(self, nums: List[int]) -> int:
        
        
        minPoints = defaultdict(int)
        maxElem = 0
        
        for elem in nums:
            minPoints[elem] += elem
            maxElem = max(elem,maxElem)
            
        mxm = minPoints[maxElem]
        
        @cache
        def earnFrom(elem):

            if elem == 0:
                return 0
            if elem == 1:
                return minPoints[1]


            return max(earnFrom(elem-1),earnFrom(elem-2)+minPoints[elem])
        
        return max(mxm,earnFrom(maxElem))
    
    

                               
        
        