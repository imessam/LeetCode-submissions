class Solution:
    def reverseWords(self, s: str) -> str:
        rev_s = ""
        rev_w = ""
        s+=" "
        for i in range(len(s)):
            if s[i] == " ":
                rev_s =rev_s + rev_w + " "
                rev_w = ""
            else:
                rev_w = s[i]+rev_w
        return rev_s[:-1]