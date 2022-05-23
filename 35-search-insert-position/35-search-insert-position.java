class Solution {
    public int searchInsert(int[] nums, int target) {
        int left = 0, right = nums.length - 1,middle = 0;
        
        while(left<=right){
            middle = (left + right) / 2;
            
            if(target == nums[middle]){
                return middle;
            }else if (target < nums[middle]){
                right = middle - 1;
            }else{
                left = middle + 1;
            }
        }
        return left;
    }
}