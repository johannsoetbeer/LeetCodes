class Solution:
    def areSimilar(self, mat: List[List[int]], k: int) -> bool:
        for i in range(len(mat)):
            for j in range(len(mat[i])):
                if not (mat[i][j] == mat[i][(j + k) % len(mat[i])]):
                    return False 
        return True
