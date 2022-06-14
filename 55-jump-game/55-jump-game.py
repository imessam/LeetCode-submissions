class Solution:
    def canJump(self, nums: List[int]) -> bool:
    
        n = len(nums)
        dp = [False]*n
        
        dp[n-1] = True
        
        leastBestIdx = n-1
        
        
        for i in range(n-2,-1,-1):
            
            if i+nums[i] >= leastBestIdx:
                leastBestIdx = i
                dp[i] = True
        
        return dp[0]