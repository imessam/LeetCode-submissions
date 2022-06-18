class Solution {
    public int rob(int[] nums) {
        
        
        
        if(nums.length <= 1)
            return nums.length == 0?0:nums[0];
        
        HashMap<Integer,Integer> dp;
        int mxm1 = 0,mxm2 = 0,amount = 0;
        
        dp = new HashMap<>();
        for(int i = 0;i<nums.length-1;i++){
            amount = robbing(nums,dp,i,nums.length-2);
            mxm1 = amount>mxm1?amount:mxm1;
        }
        dp = new HashMap<>();
        for(int i = 1;i<nums.length;i++){
            amount = robbing(nums,dp,i,nums.length-1);
            mxm2 = amount>mxm2?amount:mxm2;
        }
        
        return Math.max(mxm1,mxm2);
    }
    public int robbing(int []nums,HashMap<Integer,Integer> dp,int begin,int end){
        if(dp.containsKey(begin))
            return dp.get(begin);
        
        if(begin>=nums.length)
            return 0;
        
        int amount = 0,mxm = 0;
        for(int i = begin+2;i<=end;i++){
            amount = robbing(nums,dp,i,end);
            mxm = amount>mxm?amount:mxm;
        }
        mxm+=nums[begin];
        dp.put(begin,mxm);

        return mxm;
    }
}