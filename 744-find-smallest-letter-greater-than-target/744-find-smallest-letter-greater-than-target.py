class Solution:
    def nextGreatestLetter(self, letters: List[str], target: str) -> str:
        low = 0
        high = len(letters)
        mid = int((low+high)/2)
        
        while(low < high ):
            if(letters[mid]>target):
                high = mid
            else:
                low = mid+1
            
            mid = int((low+high)/2)
        return letters[low%len(letters)]