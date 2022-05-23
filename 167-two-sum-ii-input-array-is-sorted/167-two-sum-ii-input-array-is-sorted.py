class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        sub = {}
        
        for i in range(len(numbers)):
            if numbers[i] in sub.keys():
                return [sub[numbers[i]],i+1]
            sub[target-numbers[i]] = i+1
            