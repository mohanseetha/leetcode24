# Problem: 3232. Find if Digit Game Can Be Won

class Solution:
    def canAliceWin(self, nums: List[int]) -> bool:
        singleSum, doubleSum = 0, 0
        for i in nums:
            if i > 9:
                doubleSum += i
            else:
                singleSum += i

        return singleSum != doubleSum