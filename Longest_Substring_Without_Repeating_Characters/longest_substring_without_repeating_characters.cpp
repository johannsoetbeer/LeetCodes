#include <unordered_map>
#include <string>
#include <algorithm>

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max_len = 0;
        int start = 0;
        std::unordered_map<char, int> chars;
        for (int end = 0; end < s.length(); end++) {
            char curr = s[end];

            if (chars.find(curr) != chars.end()) {
                start = std::max(start, chars[curr] + 1);
            }

            chars[curr] = end;

            int diff = end - start + 1;
            if (diff > max_len) {
                max_len = diff;
            }
        }
        return max_len;
    }
};
