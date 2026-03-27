class Solution:
    def mySqrt(self, x: int) -> int:
        low, high = 0, x
        while low <= high:
            i = (low + high) // 2
            if i*i > x:
                high = i - 1
            else:
                res = i
                low = i +1
        return res
