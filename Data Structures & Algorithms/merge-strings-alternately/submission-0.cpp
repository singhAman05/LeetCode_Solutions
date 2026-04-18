class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0,j=0;
        string ans;
        int n = word1.size();
        int m = word2.size();
        bool k=0;
        while(i<n && j<m){
            if(!k) ans.push_back(word1[i++]);
            else ans.push_back(word2[j++]);
            k=!k;
        }

        while(i<n) ans.push_back(word1[i++]);
        while(j<m) ans.push_back(word2[j++]);

        return ans;
    }
};