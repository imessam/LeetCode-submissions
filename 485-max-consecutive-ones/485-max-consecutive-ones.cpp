class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int count = 0,max = 0;
        
        for (int i =0; i< nums.size();i++){
            
            
            if (nums[i] == 1){
                count ++;
                max = count>max?max+1:max;
                continue;
            }
            count = 0;

        }
        
        return max;
        
    }
};