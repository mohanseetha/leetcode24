// Problem: 2028. Find Missing Observations

class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int len = rolls.size() + n;
        int sum = accumulate(rolls.begin(), rolls.end(), 0);
        int missing = mean * len - sum;
        vector<int> res;
        
        if(missing < n || missing > 6*n) return {};

        int quo = missing / n, rem = missing % n;
        
        for(int i=0; i<n; i++){
            res.push_back(quo);
        }

        for(int i=0; i<rem; i++){
            res.at(i)++;
        }

        return res;
    }
};