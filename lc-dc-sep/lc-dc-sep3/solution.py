class Solution:
    def getLucky(self, s: str, k: int) -> int:
        num = 0
        for i in s:
            t = ord(i) - 96
            num += t % 10
            t //= 10
            num += t
        k -= 1
        while(k):
            t = num
            num = 0
            while(t):
                num += t % 10
                t //= 10
            k -= 1

        return num