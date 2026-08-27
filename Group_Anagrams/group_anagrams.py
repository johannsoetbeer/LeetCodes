class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        words = {}
        for word in strs:
            ident = "".join(sorted(word))
            words.setdefault(ident, []).append(word)
        return[list for list in words.values()]
        
