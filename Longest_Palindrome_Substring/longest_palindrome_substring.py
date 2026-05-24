class Solution:
    def longestPalindrome(self, s: str) -> str:
        if s == s[::-1]: return s
        max_len = 0
        res = ""
        for curr in range(len(s)):
            start = curr
            end = curr
            while (start >= 0 and end < len(s) and s[start] == s[end]):
                start -= 1
                end += 1
            diff = end - start + 1
            if (max_len < diff):
                max_len = diff
                res = s[start + 1:end]
            start = curr 
            end = curr + 1
            while (start >= 0 and end < len(s) and s[start] == s[end]):
                start -= 1
                end += 1
            diff = end - start + 1
            if (max_len < diff):
                max_len = diff
                res = s[start + 1:end]
        return res
    
