class Solution:
    def longestPalindrome(self, s: str) -> int:

        mapping = {}

        for char in s:
            if char not in mapping:
                mapping[char] = 0
            mapping[char] += 1

        length = 0
        foundOdd = False

        for char, count in mapping.items():

            if not foundOdd and (count == 1 or count % 2 != 0):
            
                length += count
                foundOdd = True

            else:

                length += count if count % 2 == 0 else (count-1)
            
        
        return length

            



