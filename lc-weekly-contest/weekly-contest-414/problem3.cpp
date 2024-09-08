// Problem: Reach End of Array With Max Score

class Solution {
public:
    long long findMaximumScore(vector<int>& nums) {
        int n = nums.size();
        long long maxScore = 0;
        int l = nums [0], j = 0;
        for (int i = 1; i < n - 1; ++i) {
            if (nums[i] > nums[j]) {
                maxScore += l * 1LL * (i - j);
                l = nums[i];
                j= i;
            }
        }
        maxScore += l * 1LL * (n - 1 - j);
        return maxScore;
    }
};