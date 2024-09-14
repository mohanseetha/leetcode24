// Problem: 2419. Longest Subarray With Maximum Bitwise AND

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int target = 0;
        for(auto& n: nums){
            if(n>target) target = n;
        }
        int res = 0, cnt = 0;
        for(auto& n: nums){
            if(n == target) cnt++;
            else cnt = 0;
            res = max(res, cnt);
        }
        return res;
    }
};