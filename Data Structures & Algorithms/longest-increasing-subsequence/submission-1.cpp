#include "bits/stdc++.h"

class Solution {
public:
    int n;
    int dp[1001];
    int solve(vector<int>& nums, int i){
        if(i>=n) return 0;
        if(dp[i]!=-1) return dp[i];
        int ans = 1;
        for(int j=i+1;j<n;j++){
            if(nums[j]>nums[i]){
                ans = max(ans, 1+solve(nums,j));
            }
        }

        return dp[i] = ans;
    }
    int lengthOfLIS(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        n = nums.size();
        int ans = 1;
        for(int i=0;i<n;i++){
            ans = max(ans, solve(nums,i));
        }
        return ans;
    }
};
