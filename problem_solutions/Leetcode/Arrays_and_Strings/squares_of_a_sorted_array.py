from typing import List
class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        left = 0
        right = len(nums)-1
        ans = []

        while left <= right:
            if abs(nums[left])>abs(nums[right]):
                ans.append(nums[left]**2)
                left+=1
            else:
                ans.append(nums[right]**2)
                right-=1
            
        ans.reverse()
        return ans