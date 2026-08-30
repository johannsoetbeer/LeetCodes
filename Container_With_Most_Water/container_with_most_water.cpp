#include <algorithm>

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int left_best = left;
        int right_best = right;
        int best_fill = (right - left) * std::min(height[left], height[right]);
        while (left < right) {
            if (height[left] <= height[right]) {
                left++;
                int fill = (right - left) * std::min(height[left], height[right]);
                if (fill > best_fill) {
                    best_fill = fill;
                    left_best = left;
                }
            } else {
                right--;
                int fill = (right - left) * std::min(height[left], height[right]);
                if (fill > best_fill) {
                    right_best = right;
                    best_fill = fill;
                }
            }
        }
        return best_fill;
    }
};
