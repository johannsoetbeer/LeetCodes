
class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        res = []
        for i in range(numRows):
            res.append([])
            res[i].append(1)
            for j in range(1,i):
                res[i].append(res[i - 1][j - 1] + res[i - 1][j])
            if i > 0:
                res[i].append(1)
        return res
