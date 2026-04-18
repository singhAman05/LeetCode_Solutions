class Solution {
public:
    int n;
    int dp[5001][2];
    int solve(vector<int> &prices,int i, bool st){
        if(i>=n) return 0;
        if(dp[i][st]!=-1) return dp[i][st];
        int tk=0,ntk=0;
        if(st){
            tk = solve(prices,i+2,!st)+prices[i];
            ntk = solve(prices,i+1,st);
        }
        else{
            tk = solve(prices,i+1,!st)-prices[i];
            ntk = solve(prices,i+1,st);
        }

        return dp[i][st] = max(tk,ntk);
    }
    int maxProfit(vector<int>& prices) {
        n = prices.size();
        memset(dp,-1,sizeof(dp));
        return solve(prices,0,0);
    }
};
