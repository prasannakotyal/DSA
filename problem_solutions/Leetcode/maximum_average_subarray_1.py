from typing import List
class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        max_avg =0
        sum=0
        for i in range(k):
            sum+=nums[i]
        max_avg = sum/k

        for i in range(k,len(nums)):
            sum+=nums[i]
            sum-=nums[i-k]
            avg = sum/k
            max_avg = max(avg,max_avg)

        return max_avg
