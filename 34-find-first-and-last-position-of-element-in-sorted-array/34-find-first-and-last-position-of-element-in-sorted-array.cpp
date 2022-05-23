class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> pos;
        if(nums.size() == 0){
            pos.push_back(-1);
            pos.push_back(-1);
            return pos;
        }
        
        int start = binarySearch(0,nums.size()-1,nums,target);
        int begin,end;
        if(start == -1){
            pos.push_back(-1);
            pos.push_back(-1);
        }else{
            begin = start;
            while((begin-1) >=0 && nums[begin-1] == target){
                begin = binarySearch(0,begin-1,nums,target);
            }
            pos.push_back(begin);
            end = start;
            while ((end+1) < nums.size() && nums[end+1] == target){
                end = binarySearch(end+1,nums.size()-1,nums,target);
            }
            pos.push_back(end);
        }
        return pos;
    }
    
    int binarySearch(int low,int high,vector<int>& nums,int target){
        if(low>high){
            return -1;
        }
        int middle = (low+high)/2;
        
        if(nums[middle] == target){
            return middle;
        }else if(target < nums[middle]){
            return binarySearch(low,middle-1,nums,target);
        }else {
            return binarySearch(middle+1,high,nums,target);
        }
    }
};