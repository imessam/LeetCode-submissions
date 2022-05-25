class Solution:
    
    def search(self,grid):
        low,high = 0,len(grid)-1
        mid = int((low+high)/2)
        
        while(low<=high):
            if (grid[mid] < 0) and ((mid == 0) or grid[mid-1]>=0):
                return (len(grid)-mid)
            if (grid[mid] >= 0):
                low = mid+1
            else:
                high = mid-1
            mid = int((low+high)/2)
        
        return 0
        
        
    
    def countNegatives(self, grid: List[List[int]]) -> int:
        
        M,N = len(grid),len(grid[0])
        count = 0
        
        for m in range(M):
            count += self.search(grid[m])
            
        return count
            