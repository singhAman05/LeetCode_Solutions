#include "bits/stdc++.h"
class Solution {
public:
    int n;
    int dp[201][1001];
    int solve(vector<int>& nums, int target, int i){
        if(i>=n || target<0) return 0;
        if(target ==0) return 1;
        if(dp[i][target]!=-1) return dp[i][target];
        return dp[i][target] = solve(nums, target, i+1) + solve(nums, target-nums[i], 0);
    }
    int combinationSum4(vector<int>& nums, int target) {
        memset(dp,-1,sizeof(dp));
        n = nums.size();
        return solve(nums,target,0);
    }
};