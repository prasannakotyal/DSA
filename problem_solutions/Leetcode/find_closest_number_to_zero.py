from typing import List

class Solution:
    def findClosestNumber(self, nums: List[int]) -> int:
        min = nums[0]

        for num in nums:
            if abs(num)<abs(min):
                min = num

        if min<0 and abs(min) in nums:
            return abs(min)
        else:
            return min