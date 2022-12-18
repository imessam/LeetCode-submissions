class Solution {
    public int pivotIndex(int[] nums) {
        
        int leftSum = 0, rightSum = 0;
        
        for(int num : nums)
            rightSum += num;
        rightSum -= nums[0];
        
        if(rightSum == 0)
            return 0;
        
        for(int pivot = 1; pivot < nums.length; pivot++){
            leftSum += nums[pivot-1];
            rightSum -= nums[pivot];
            
            if(leftSum == rightSum)
                return pivot;
        }
        return -1;
    }
}