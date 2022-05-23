class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        vector<int> rotated(size,0);
        for(int i = 0;i<size;i++){
            rotated[(i+k)%size] = nums[i]; 
        }
        nums = rotated;
    }
};