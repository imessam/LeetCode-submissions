class Solution:
    def maxSubarraySumCircular(self, nums: List[int]) -> int:
        
        arrSum = sum(nums)
        maxSum = self.maxSubArray(nums)
        nums = [-i for i in nums]
        minSum = self.maxSubArray(nums)
        
        
        return maxSum if minSum + arrSum == 0 else max(maxSum,minSum+arrSum)
        
    def maxSubArray(self, nums: List[int]) -> int:
        
        localMax = nums[0]
        globalMax = localMax
        
        for i in range(1,len(nums)):
            localMax = max(nums[i],localMax+nums[i])
            globalMax = max(localMax,globalMax)
        
        return globalMax