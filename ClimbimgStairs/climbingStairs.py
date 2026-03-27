class Solution:
    def climbStairs(self, n: int) -> int:
        if n <= 2:
            return n
        res = 0
        l, m = 2, 1
        for i in range(3, n+1):
           res = l +m
           m = l
           l = res
        return res 
    
