# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def levelOrderBottom(self, root: Optional[TreeNode]) -> List[List[int]]:
        res = []
        queue = []
        if root:
            queue.append(root)  
        while (queue != []):
            level = []
            for _ in range(len(queue)):
                if len(queue) > 0:
                    curr = queue.pop(0)
                else: 
                    continue
                level.append(curr.val)
                if curr.left:
                    queue.append(curr.left)
                if curr.right:
                    queue.append(curr.right)
            if len(level) > 0:
                res.append(level)
        return res[::-1]
        
