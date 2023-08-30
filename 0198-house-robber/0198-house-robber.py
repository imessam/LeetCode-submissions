class Solution:
    def rob(self, nums: List[int]) -> int:
        
        if len(nums) == 1:
            return nums[0]
        
        @cache
        def helper(start):
            
            if start >= len(nums):
                return 0
            
            maxRob = 0
            
            for i in range(2,len(nums)):
                maxRob = max(maxRob, helper(start + i))
            
            
            return nums[start] + maxRob
        
        return max([helper(i) for i in range(len(nums))])