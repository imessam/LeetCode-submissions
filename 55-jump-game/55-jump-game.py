class Solution:
    def canJump(self, nums: List[int]) -> bool:
    
        n = len(nums)
        
        leastBestIdx = n-1
        
        
        for i in range(n-2,-1,-1):
            
            if i+nums[i] >= leastBestIdx:
                leastBestIdx = i
        
        return leastBestIdx == 0