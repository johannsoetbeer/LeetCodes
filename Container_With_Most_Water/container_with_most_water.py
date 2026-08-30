class Solution:
    def maxArea(self, height: List[int]) -> int:
        left = 0
        left_best = left
        right = len(height) - 1
        right_best = right
        best_fill = right * min(height[left], height[right])
        while (left < right):
            if height[left] <= height[right]:
                left += 1
                fill = (right - left) * min(height[left], height[right])
                if fill > best_fill:
                    left_best = left
                    best_fill = fill
            else:
                right -= 1
                fill = (right - left) * min(height[left], height[right])
                if fill > best_fill:
                    right_best = right
                    best_fill = fill
        return best_fill
