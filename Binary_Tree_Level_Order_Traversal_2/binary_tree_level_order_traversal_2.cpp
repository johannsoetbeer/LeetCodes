#include <vector>
#include <queue>
using namespace std;
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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> tmp;
        queue<TreeNode*> q;
        if (root) {
            q.push(root);
        }
        while (q.size() > 0) {
            vector<int> level;
            int size = q.size();
            for (int i = 0; i < size; i++) {
                TreeNode* curr = q.front();
                q.pop();
                if (curr) {
                    level.push_back(curr->val);
                }
                if (curr->left) {
                    q.push(curr->left);
                }
                if (curr->right) {
                    q.push(curr->right);
                }
            }
            if (level.size() > 0) {
                tmp.push_back(level);
            }
        }
        vector<vector<int>> res;
        for (int i = tmp.size() - 1; i >= 0; i--) {
            res.push_back(tmp[i]);
        }
        return res;
    }
};
