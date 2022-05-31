class Solution:
    def judgeSquareSum(self, c: int) -> bool:
        
        if c <= 1:
            return True
                                
    
        a = 0 
        sqr = int(c**0.5)
        while(a<=sqr):
            
            low = 0
            high = sqr
        
            mid = (low+high)//2   
            
            while(low<=high):
                
                res = ((a*a)+(mid*mid)) 
                if res == c:
                    print(a,mid)
                    return True
                elif res>c:
                    high = mid-1
                else:
                    low = mid+1
                mid = (low+high)//2
                
            a += 1
            
        return False
            