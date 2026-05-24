class Solution {
    public String longestPalindrome(String s) {
        int max_len = 0;
        String res = "";
        int s_len = s.length();
        for (int i = 0; i < s_len; i++) {
            int start = i;
            int end = i;
            while (start >= 0 && end < s_len && s.charAt(start) == s.charAt(end)) {
                start--;
                end++;
            }
            int diff = end - start + 1;
            if (diff > max_len) {
                max_len = diff;
                res = s.substring(start + 1, end);
            }
            start = i;
            end = i + 1;
            while (start >= 0 && end < s_len && s.charAt(start) == s.charAt(end)) {
                start--;
                end++;
            }
            diff = end - start + 1;
            if (diff > max_len) {
                max_len = diff;
                res = s.substring(start + 1, end);
            }
        }
        return res;
    }
}
