class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0,digits = 0,curr=0;
        for(int i =0; i< nums.size(); i++){
            curr = nums[i];
                digits = 1;
            while((curr =curr/10)!=0){
                digits ++;
            }
            if((digits %2) == 0){
                count ++;
            }
        }
        return count;
    }
};