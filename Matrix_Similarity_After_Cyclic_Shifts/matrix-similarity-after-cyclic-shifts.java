class Solution {
    public boolean areSimilar(int[][] mat, int k) {
        for (int i = 0; i < mat.length; i ++) {
            for (int j = 0; j < mat[i].length; j++) {
                if (mat[i][j] != mat[i][(j + k) % mat[i].length]) {
                        return false;
                }
            }
        }
        return true;
    }
}
