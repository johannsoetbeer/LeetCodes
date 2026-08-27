class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        std::vector<std::unordered_set<int>> seen_rows(9);        
        std::vector<std::unordered_set<int>> seen_cols(9);
        std::vector<std::unordered_set<int>> seen_box(9);

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                int curr;
                if (board[i][j] != '.') {
                    curr = board[i][j];
                } else {
                    continue;
                }
                if (seen_rows[i].count(curr) || seen_cols[j].count(curr) || seen_box[(i / 3) * 3 + (j / 3)].count(curr)) {
                    return false;
                }
                seen_rows[i].insert(curr);
                seen_cols[j].insert(curr);
                seen_box[(i / 3) * 3 + (j / 3)].insert(curr);
            }
        }

        return true;
    }
};
