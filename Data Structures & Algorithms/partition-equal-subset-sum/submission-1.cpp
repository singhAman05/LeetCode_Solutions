#include "bits/stdc++.h"
using namespace std;

class Solution {
public:
    int n;
    int dp[101][10001]; // dp[i][tar]

    bool solve(vector<int>& nums, int tar, int i){
        if(tar == 0) return 1;
        if(tar < 0 || i >= n) return 0;

        if(dp[i][tar] != -1) return dp[i][tar];

        return dp[i][tar] = solve(nums, tar - nums[i], i + 1) || solve(nums, tar, i + 1);
    }

    bool canPartition(vector<int>& nums) {
        n = nums.size();
        int sum = accumulate(nums.begin(), nums.end(), 0);

        if(sum & 1) return 0;

        int tar = sum / 2;

        memset(dp, -1, sizeof(dp));

        return solve(nums, tar, 0);
    }
};