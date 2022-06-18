class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        
        if len(needle) > len(haystack) or (len(needle) == len(haystack) and needle != haystack):
            return -1
        
        if len(needle) == 0 or needle == haystack:
            return 0
        
        
        window = ""
        
        # for i in range(len(needle)):
        #     window += haystack[i]
        
        window = haystack[:len(needle)]
        
        for i in range(len(needle),len(haystack)):
            
            if window == needle:
                return i-len(needle)
            
            window = window[1:] + haystack[i]
        
        return -1 if window != needle else len(haystack)-len(needle)
             
            
        
        