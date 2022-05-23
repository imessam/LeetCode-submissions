class Solution:
    
    def binarySearch(self,begin,end,nums,target):
        
        if(begin == end or end == -1):
            if (target == nums[begin]):
                return begin
            return -1
        
        middle = int((begin+end)/2)
        
        if (target == nums[middle]):
            return middle
        elif (target > nums[middle]):
            return self.binarySearch(middle+1,end,nums,target)
        elif (target < nums[middle]):
            return self.binarySearch(begin,middle-1,nums,target)
        
    def search(self, nums: List[int], target: int) -> int:
        return self.binarySearch(0,len(nums)-1,nums,target)