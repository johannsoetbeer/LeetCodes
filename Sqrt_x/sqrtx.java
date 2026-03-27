class Solution {
    public int mySqrt(int x) {
        long low = 0;
        long high = x;
        int res = (int) x;
        long i;
        while (low <= high) {
            i = (low + high) / 2;
            if (i*i > x) {
                high = i -1;
            } else {
                low = i +1;
                res = (int) i;
            }
        }
        return res;
    }
}
