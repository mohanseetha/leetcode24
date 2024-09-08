// Problem: 3232. Find if Digit Game Can Be Won

class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int singleSum, doubleSum;
        for(auto i: nums){
            if(i > 9) doubleSum += i;
            else singleSum += i;
        }
        return singleSum != doubleSum;
    }
};