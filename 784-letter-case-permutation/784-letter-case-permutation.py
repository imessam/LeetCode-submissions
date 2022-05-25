class Solution:
    def letterCasePermutation(self, s: str) -> List[str]:
        
        queue = []
        idx = 0
        self.add(queue,"",s[idx])
        idx+=1
        
        while(idx != len(s)):
            #print(queue)
            
            l = len(queue)
            
            for i in range(l):
                curr = queue.pop(0)
                self.add(queue,curr,s[idx])
            idx += 1
        return queue
    
    def add(self,queue,curr,char):
        if char.isnumeric():
            queue.append(curr+char)
        else:
            queue.append(curr+char.lower())
            queue.append(curr+char.upper())
        
            
    
        