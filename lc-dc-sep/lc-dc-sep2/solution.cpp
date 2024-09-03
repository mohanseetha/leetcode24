class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long s = 0;
        for(int itr: chalk) {
            s += itr;
        }
        int t = k % s;
        if(t > 0){
            for(int i=0; i<chalk.size(); i++){
                int n = chalk.at(i);
                if(n <= t) t -= n;
                else return i;
            }
        }
        return 0;
    }
};