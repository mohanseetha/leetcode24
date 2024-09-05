# Problem: 2028. Find Missing Observations

class Solution:
    def missingRolls(self, rolls: List[int], mean: int, n: int) -> List[int]:
        size = len(rolls) + n
        rollsSum = sum(rolls)
        missing = mean * size - rollsSum
        res = []

        if missing < n or missing > 6*n:
            return res

        q = missing // n
        r = missing % n

        for i in range(n):
            res.append(q)

        for i in range(r):
            res[i] += 1

        return res