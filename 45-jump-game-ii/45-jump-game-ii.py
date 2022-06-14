class Solution:
    def jump(self, nums: List[int]) -> int:
        
        n = len(nums)
        count = 0
        dp = [-1]*n
        
        dp[n-1] = 0
        
        leastBestIdx = n-1
        
        
        for i in range(n-2,-1,-1):
            
            
            if i+nums[i] >= leastBestIdx:
                if i+nums[i] == leastBestIdx:
                    dp[i] = 1+dp[leastBestIdx]
                elif i+nums[i] >= n-1:
                    dp[i] = 1
                else:
                    mnm = n
                    for j in range(i+nums[i],leastBestIdx-1,-1):
                        if dp[j] != -1:
                            mnm = min(mnm,dp[j])
                    dp[i] = 1+mnm
                leastBestIdx = i
            
        return dp[0]
        
        
                
        
        
        
    
        