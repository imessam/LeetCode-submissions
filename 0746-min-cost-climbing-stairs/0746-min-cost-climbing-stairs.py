class Solution:
    def minCostClimbingStairs(self, cost: List[int]) -> int:
        
        
        
        if len(cost) == 1:
            return cost[0]
        
        
        @lru_cache
        def climb(start):
            if start >= len(cost):
                return 0
            
            return min(cost[start] + climb(start+1), cost[start] + climb(start+2))
        
        return min(climb(0), climb(1))