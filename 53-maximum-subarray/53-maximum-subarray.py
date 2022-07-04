class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        
        localMax = nums[0]
        globalMax = localMax
        
        for i in range(1,len(nums)):
            localMax = max(nums[i],localMax+nums[i])
            globalMax = max(localMax,globalMax)
        
        return globalMax
        
        
            