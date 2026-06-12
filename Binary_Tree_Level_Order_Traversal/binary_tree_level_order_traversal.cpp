#include <vector>
#include <queue>

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        std::vector<std::vector<int>> result;
        std::queue<TreeNode*> levels;
        if (root) {
            levels.push(root);
        }

        while (!levels.empty()) {
            std::vector<int> current_level;
            int level_size = int(levels.size());
            for (int i = 0; i < level_size; i++) {
                TreeNode *current = levels.front();
                levels.pop();
                if (current->left) {
                    levels.push(current->left);
                }
                if (current->right) {
                    levels.push(current->right);
                }
                current_level.push_back(current->val);
            }
            result.push_back(current_level);
        }
        return result;
    }
};
