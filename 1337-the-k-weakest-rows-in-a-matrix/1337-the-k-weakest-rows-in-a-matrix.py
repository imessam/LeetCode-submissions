class Solution:
    
    def searchLastOne(self,arr):
        
        if(arr[0] == 1 and arr[1] == 0):
            return 1
        if(arr[-1] == 1):
            return len(arr)
        
        low , high = 0,len(arr)-1
        
        mid = (low+high)//2
        
        while(low<=high):
            if(arr[mid] == 1):
                if ((mid+1) < len(arr) and arr[mid+1] == 0):
                    return mid+1
                low = mid+1
            elif(arr[mid] == 0):
                high = mid-1
            
            mid = (low+high)//2
        return 0
            
        
        
    def kWeakestRows(self, mat: List[List[int]], k: int) -> List[int]:
        
        results = []
        dic = {}
        
        for row in range(len(mat)):
            
            result = self.searchLastOne(mat[row])
                            
            results.append(result)
                
            if result not in dic:
                dic[result] = []
                    
            dic[result].append(row)
                
        sortedRes = set(results)
        
        
        rows = []
        for result in sortedRes:
            rows += dic[result]
        
        return rows[:k]
        
                
        