class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        max_len = 0
        chars = {}
        start = 0
        for end in range(len(s)):
            if s[end] in chars:
                start = max(start, chars[s[end]] + 1)
            chars[s[end]] = end
            diff = end - start + 1
            if diff > max_len:
                max_len = diff
        return max_len
