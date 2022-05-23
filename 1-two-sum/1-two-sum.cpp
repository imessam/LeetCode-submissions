class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indices;
        bool isFound = false;
        
        for(int i = 0; i < nums.size() && !isFound; i++){
            for(int j = i+1; j<nums.size() && !isFound ; j++){
                if((nums[i] + nums[j]) == target){
                    indices.push_back(i);
                    indices.push_back(j);
                    isFound = true;
                }
            }
        }
        return indices;
    }
};