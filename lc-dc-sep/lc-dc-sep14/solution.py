# Problem: 2419. Longest Subarray With Maximum Bitwise AND

class Solution:
    def longestSubarray(self, nums: List[int]) -> int:
        target = max(nums)
        res, cnt = 0, 0
        for n in nums:
            if n == target:
                cnt += 1
            else:
                cnt = 0
            res = max(res, cnt)
        
        return res