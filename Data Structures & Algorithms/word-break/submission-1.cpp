#include "bits/stdc++.h"
class Solution {
public:
    int n;
    int dp[201];
    bool solve(string s, set<string>& st, int i){
        if(i>=n) return 1;
        if(dp[i]!=-1) return dp[i];
        int ans = 0;
        for(int j=i;j<n;j++){
            string tmp = s.substr(i,j-i+1);
            if(st.find(tmp)!=st.end()){
                ans |= solve(s,st,j+1);
            }
        }

        return dp[i] = ans;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        memset(dp,-1, sizeof(dp));
        set<string> st(wordDict.begin(), wordDict.end());
        n = s.size();
        return solve(s,st,0);
    }
};
