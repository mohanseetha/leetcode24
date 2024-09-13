// Problem: 1310. XOR Queries of a Subarray

class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> res;
        int n = arr.size();
        for(int i=1; i<n; i++) arr[i] ^= arr[i-1];
        n = queries.size();
        for(auto& query: queries){
            if(query[0] > 0) res.push_back(arr[query[0]-1] ^ arr[query[1]]);
            else res.push_back(arr[query[1]]);
        }
        return res;
    }
};