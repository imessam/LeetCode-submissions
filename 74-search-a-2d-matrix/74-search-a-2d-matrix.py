class Solution:
    def binarySearchRow(self,begin,end,target,matrix):
        middle = int((begin+end)/2)
        #print(begin,middle,end)
        
        if middle == begin:
            if target <= matrix[begin][-1]:
                return begin
            return end
        elif target == matrix[middle][-1]:
            return middle
        elif target < matrix[middle][-1]:
            return self.binarySearchRow(begin,middle,target,matrix)
        elif target > matrix[middle][-1] :
            return self.binarySearchRow(middle,end,target,matrix)
        
    def binarySearchCol(self,begin,end,target,matrix):
        middle = int((begin+end)/2)
                
        if target == matrix[middle]:
            return True
        elif middle == begin:
            return matrix[begin] == target or matrix[end] == target
        elif target < matrix[middle]:
            return self.binarySearchCol(begin,middle,target,matrix)
        elif target > matrix[middle] :
            return self.binarySearchCol(middle,end,target,matrix)
        
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        row = self.binarySearchRow(0,len(matrix)-1,target,matrix)
        
        return self.binarySearchCol(0,len(matrix[row])-1,target,matrix[row])
        
