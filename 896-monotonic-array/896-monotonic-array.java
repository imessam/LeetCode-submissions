class Solution {
    public boolean isMonotonic(int[] nums) {
        
        int prev = -1;
        int prevFlag = -1,flag = -1;
        
        for(int i=0;i<nums.length;i++){
            if(i == 0){
                prev = nums[i];
                continue;
            }
            flag = nums[i]==prev?0:nums[i]<prev?1:2;
            
            if(flag == 0)
                continue;
            else if(prevFlag <= 0)
                prevFlag = flag;
            else if(prevFlag != flag)
                return false;
            prev = nums[i];
        }
        return true;
    }
}