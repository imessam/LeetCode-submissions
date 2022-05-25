class Solution {
    public int rob(int[] nums) {
        
        HashMap<Integer,Integer> dp = new HashMap<>();
        int mxm = 0,amount = 0;
        
        for(int i = 0;i<nums.length;i++){
            amount = robbing(nums,dp,i);
            mxm = amount>mxm?amount:mxm;
        }
        return mxm;
    }
    public int robbing(int []nums,HashMap<Integer,Integer> dp,int begin){
        if(dp.containsKey(begin))
            return dp.get(begin);
        
        if(begin>=nums.length)
            return 0;
        
        int amount = 0,mxm = 0;
        for(int i = begin+2;i<nums.length;i++){
            amount = robbing(nums,dp,i);
            mxm = amount>mxm?amount:mxm;
        }
        mxm+=nums[begin];
        dp.put(begin,mxm);

        return mxm;
    }
}