class Solution:
    def threeSum(self, nums: list[int]) -> list[list[int]]:
        nums.sort()
        res = []
        for i in range(len(nums)):
            if i > 0 and nums[i] == nums[i - 1]:
                continue
            if nums[i] > 0:
                break
            left = i + 1
            right = len(nums) - 1
            while left < right:
                if nums[left] + nums[right] == - nums[i]:
                    res.append([nums[i], nums[left], nums[right]])
                    left += 1
                    while left < right and nums[left - 1] == nums[left]:
                        left += 1
                elif nums[left] + nums[right] < - nums[i]:
                    left += 1
                else:
                    right -= 1
        return res   
