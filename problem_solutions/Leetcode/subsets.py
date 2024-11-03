from typing import List
class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        n = len(nums)
        res,sol = [],[]

        def backtracking(i):
            if i==n:
                res.append(sol[:])
                return
            
            # not picking the value
            backtracking(i+1)

            # picking the value
            sol.append(nums[i])
            backtracking(i+1)
            sol.pop()
        
        backtracking(0)
        return res