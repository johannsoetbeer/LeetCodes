class Solution {
public:
    string longestPalindrome(string s) {
        int max_len = 0;
        int s_len = s.length();
        string res = "";
        for (int i = 0; i < s_len; i++) {
            int start = i;
            int end = i;
            while (start >= 0 && end < s_len && s.at(start) == s.at(end)) {
                start--;
                end++;
            }
            int diff = end - start - 1;
            if (diff > max_len) {
                max_len = diff;
                res = s.substr(start + 1, diff);
            }
            start = i;
            end = i + 1;
            while (start >= 0 && end < s_len && s.at(end) == s.at(start)) {
                start--;
                end++;
            }
            diff = end - start - 1;
            if (diff > max_len) {
                max_len = diff;
                res = s.substr(start + 1, diff);
            }
        }
        return res;
    }
};
