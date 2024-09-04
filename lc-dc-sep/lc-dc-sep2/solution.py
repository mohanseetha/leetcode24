# Problem: 1894. Find the Student that Will Replace the Chalk

class Solution:
    def chalkReplacer(self, chalk: List[int], k: int) -> int:
        s = sum(chalk)
        t = k % s

        if t > 0:
            for i, n in enumerate(chalk):
                if n <= t:
                    t -= n
                else:
                    return i

        return 0
        