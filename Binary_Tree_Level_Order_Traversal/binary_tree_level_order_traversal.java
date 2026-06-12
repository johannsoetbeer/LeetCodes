import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;

/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public List<List<Integer>> levelOrder(TreeNode root) {
        List<List<Integer>> result = new ArrayList<>();
        Queue<TreeNode> levels = new LinkedList<>();
        if (root != null) {
            levels.offer(root);
        }
        while (levels.size() > 0) {
            List<Integer> current_level = new ArrayList<>();
            int level_size = levels.size();
            for (int i = 0; i < level_size; i++) {
                TreeNode current = levels.poll();
                current_level.add(current.val);
                if (current.left != null) {
                    levels.offer(current.left);
                }
                if (current.right != null) {
                    levels.offer(current.right);
                }
            }
            result.add(current_level);
        }
        return result;
    }
}
