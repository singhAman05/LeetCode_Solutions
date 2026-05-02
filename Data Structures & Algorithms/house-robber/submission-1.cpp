#include <cstring>

class Solution {
public:
    int n;
    int dp[101];

    int solve(vector<int>& nums, int i){
        if(i>=n) return 0;
        if(dp[i]!=-1) return dp[i];
        return dp[i] = max(solve(nums,i+1), nums[i] + solve(nums,i+2));

    }
    int rob(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        n = nums.size();
        return solve(nums, 0);
    }
};
