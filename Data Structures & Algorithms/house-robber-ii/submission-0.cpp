#include <cstring>

class Solution {
public:
    int n;
    int dp[101];
    int solve(vector<int>& nums, int i , int si){
        if(i>si) return 0;
        if(dp[i]!=-1) return dp[i];
        return dp[i] = max(solve(nums,i+1,si), nums[i]+solve(nums,i+2,si));
    }
    int rob(vector<int>& nums) {
        n = nums.size();
        if(n == 1) return nums[0];

        memset(dp, -1, sizeof(dp));
        int case1 = solve(nums, 0, n-2);

        memset(dp, -1, sizeof(dp));
        int case2 = solve(nums, 1, n-1);

        return max(case1,case2);

    }
};
