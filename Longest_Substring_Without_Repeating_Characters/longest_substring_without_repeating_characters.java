import java.util.HashMap;

class Solution {
    public int lengthOfLongestSubstring(String s) {
        int max_len = 0;
        int start = 0;
        HashMap<Character, Integer> chars = new HashMap<>();
        for (int end = 0; end < s.length(); end++) {
            char curr = s.charAt(end);
            if (chars.containsKey(curr)) {
                start = Math.max(start, chars.get(curr) + 1);
            }
            chars.put(curr, end);
            int diff = end - start + 1;
            if (diff > max_len) {
                max_len = diff;
            }
        }
        return max_len;
    }
}
