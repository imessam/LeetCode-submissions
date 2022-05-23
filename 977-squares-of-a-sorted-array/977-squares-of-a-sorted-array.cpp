class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int negPointer = 0,posPointer = 0,continuePointer = 0;
        bool isFound = false;
        
        vector<int> sq ;
        
        while (posPointer<nums.size() && negPointer>=0){
            if(!isFound){
                if(nums[posPointer] >=0 ){
                    isFound = true;
                    negPointer -= 1;
                }else{
                    negPointer +=1;
                    posPointer +=1;
                }
            }
            else{
                if(nums[posPointer] < (nums[negPointer]*-1)){
                    sq.push_back(nums[posPointer]*nums[posPointer]);
                    posPointer +=1;
                }else{
                    sq.push_back(nums[negPointer]*nums[negPointer]);
                    negPointer-=1;
                }
            }
        }
        
        if(!isFound){
            negPointer-=1;
        }
        while(posPointer < nums.size()){
            sq.push_back(nums[posPointer]*nums[posPointer]);
            posPointer +=1;
        }
         while(negPointer >= 0){
            sq.push_back(nums[negPointer]*nums[negPointer]);
            negPointer-=1;
        }
        
        return sq;
    }
};