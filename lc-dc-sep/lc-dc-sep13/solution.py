# Problem: 1310. XOR Queries of a Subarray

class Solution:
    def xorQueries(self, arr: List[int], queries: List[List[int]]) -> List[int]:
        res = []
        n = len(arr)
        for i in range(1, n):
            arr[i] ^= arr[i-1]
        
        for l, r in queries:
            if l > 0:
                res.append(arr[l-1]^arr[r])
            else:
                res.append(arr[r])
        return res