class Solution:
    def selfDividingNumbers(self, left: int, right: int) -> List[int]:
        
        nums = []
        
        def isSelfDivide(num: int) -> bool:
            
            if num % 10 == 0:
                return False
            
            currNum = num
            
            while(currNum != 0):
                digit = currNum % 10
                
                if digit == 0 or num % digit != 0:
                    return False
                
                currNum = currNum // 10
                
            return True
        
        for num in range(left,right+1):
            
            
            if isSelfDivide(num):
                nums.append(num)
                
        return nums