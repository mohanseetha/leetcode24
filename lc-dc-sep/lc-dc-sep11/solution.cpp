// Problem: 2220. Minimum Bit Flips to Convert Number

class Solution {
public:
    int minBitFlips(int start, int goal) {
        int res = start xor goal;
        int count = 0;
        while(res){
            count += res & 1;
            res >>= 1;
        }
        return count;
    }
};