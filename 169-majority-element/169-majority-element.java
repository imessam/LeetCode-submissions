class Solution {
    public int majorityElement(int[] nums) {
        Arrays.sort(nums);
        
        int max = 1,begin = 0,temp = nums[begin],count = 1,maxIdx = 0;
        
        for(int i = 1;i<nums.length;i++){
            
            if(nums[i] == temp)
                count++;
            else{
                maxIdx = count>max?begin:maxIdx;
                max = count>max?count:max;
                begin = i;
                temp = nums[begin];
                count = 1;
            }

        }
        
        maxIdx = count>max?begin:maxIdx;
        
        return nums[maxIdx];
    }
}