/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int countNodes(struct TreeNode* root) {
    if (root == NULL) {
        return 0;
    }
    return 1 + countNodes(root->left) + countNodes(root->right);
}

void traverse(struct TreeNode* node, int* res, int* index) {
    if (node == NULL) {
        return;
    }

    *(res + *(index)) = node->val;
    (*index)++;
    traverse(node->left, res, index);
    traverse(node->right, res, index);
}

int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    *returnSize = countNodes(root);

    int* res = malloc(sizeof(int) * countNodes(root));

     if (root == NULL) {
        return res;
    }

    int currentPosition = 0;
    traverse(root, res, &currentPosition);
    return res;
}


