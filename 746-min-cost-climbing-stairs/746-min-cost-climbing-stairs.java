class Solution {
    public int minCostClimbingStairs(int[] cost) {
        
        HashMap<Integer,Integer> dp = new HashMap<>();
        
        int m1 = climb(0,0,cost,dp) , m2 = climb(0,1,cost,dp);
        
        return m1<m2?m1:m2;
    }
    public int climb(int begin,int steps,int[] cost, HashMap<Integer,Integer> dp){
        
        if(begin+steps >= cost.length)
            return 0;
        
        if(dp.containsKey(begin+steps))
            return dp.get(begin+steps);
        
        int price = cost[begin+steps];
        int m1 = climb(begin+steps,1,cost,dp),m2 = climb(begin+steps,2,cost,dp);
        
        dp.put(begin+steps,price+(m1<m2?m1:m2));
        
        return dp.get(begin+steps);
    }
}