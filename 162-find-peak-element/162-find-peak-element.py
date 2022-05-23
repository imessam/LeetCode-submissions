class Solution:
    def findPeakElement(self, nums: List[int]) -> int:
        
        return self.binarySearch(0,len(nums)-1,nums)
        
    def binarySearch(self,low,high,nums):
        
        if low == high:
            return low
        
        middle = int((low+high)/2)
        
        if nums[middle] > nums[middle+1]:
            return self.binarySearch(low,middle,nums)
        else:
            return self.binarySearch(middle+1,high,nums)
