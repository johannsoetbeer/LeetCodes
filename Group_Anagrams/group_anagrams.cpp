#include <algorithm>
#include <string>

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<std::string, std::vector<std::string>> words;
        for (int i = 0; i < (int)strs.size(); i++) {
            string word = strs[i];
            string ident = word;
            std::sort(ident.begin(), ident.end());
            words[ident].push_back(word);
        }
        std::vector<std::vector<std::string>> res;
        for (const auto&[key,group] : words) {
            res.push_back(group);
        }
        return res;
    }
};
