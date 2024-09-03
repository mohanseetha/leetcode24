class Solution {
public:
    int getLucky(string s, int k) {
        int num = 0;
        for(auto i: s){
            int t = (i - 96);
            num += t % 10;
            t /= 10;
            num += t;
        }
        k--;
        while(k){
            int t = num;
            num = 0;
            while(t){
                num += t % 10;
                t /= 10;
            }
            k--;
        }
        return num;
    }
};