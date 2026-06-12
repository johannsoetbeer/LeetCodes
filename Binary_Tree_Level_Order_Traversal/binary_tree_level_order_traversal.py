from typing import List, Optional
from collections import deque

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        result = []
        levels = deque()
        if root:
            levels.append(root)
        while len(levels) > 0:
            current_level = []
            level_size = len(levels)
            for _ in range(level_size):
                current_node = levels.popleft()
                current_level.append(current_node.val)
                if current_node.left:
                    levels.append(current_node.left)
                if current_node.right:
                    levels.append(current_node.right)
                
            result.append(current_level)
        return result
