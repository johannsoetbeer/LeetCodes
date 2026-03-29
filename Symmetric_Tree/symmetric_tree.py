# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSameTreeModified(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:
        if p == None and q == None:
            return True
        if not p or not q or p.val != q.val:
            return False
        return self.isSameTreeModified(p.right, q.left) and self.isSameTreeModified(p.left, q.right)
 
    def isSymmetric(self, root: Optional[TreeNode]) -> bool:
        return self.isSameTreeModified(root.left, root.right)
   
