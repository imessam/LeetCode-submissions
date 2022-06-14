class Solution:
    def jump(self, nums: List[int]) -> int:
        
        n = len(nums)
        count = 0
        dp = [False]*n
        
        dp[n-1] = True
        
        leastBestIdx = n-1
        
        
        for i in range(n-2,-1,-1):
            
            if i+nums[i] >= leastBestIdx:
                leastBestIdx = i
                dp[i] = True
                
        @cache
        def minJumps(sr):
            
            if sr >= (n-1):
                return 0

            minJump = n

            for i in range(nums[sr],0,-1):

                if (sr+i) < len(dp) and dp[sr+i] == True:
                    minJump = min(minJump,minJumps(sr+i))

            return 1+minJump
        
        return minJumps(0)
        
        
                
        
        
        
    
        