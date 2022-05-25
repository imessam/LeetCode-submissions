class Solution:
    def specialArray(self, nums: List[int]) -> int:
        sortedArr = sorted(nums)
        low = 0
        high = len(sortedArr)
        mid = (low+high)//2
        
        while(low <= high):
            
            code = self.checkSpecial(sortedArr,mid)
            
            if code == 0:
                return mid
            elif code == 1:
                high = mid-1
            else:
                low = mid+1
            mid = (low+high)//2
        
        return -1
    
    def checkSpecial(self,nums,x):
        
        count = 0
        
        for elem in nums:
            if elem >= x:
                count+=1
        
        if count == x:
            return 0
        elif count < x:
            return 1
        else:
            return 2
                
        