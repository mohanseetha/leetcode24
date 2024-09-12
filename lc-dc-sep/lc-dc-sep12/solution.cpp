// Problem: 1684. Count the Number of Consistent Strings

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0;
        unordered_set<char> allowedChars(allowed.begin(), allowed.end());
        for(auto& word: words){
            bool isConsistent = true;
            for(int i=0; i<word.size(); i++){
                char currWord = word[i];
                if(allowedChars.find(currWord) == allowedChars.end()){
                    isConsistent = false;
                    break;
                }
            }
            if(isConsistent) count++;
        }
        return count;
    }
};