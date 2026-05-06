class Solution {
public:
    int n;
    bool solve(vector<int>& nums, int tar, int i){
        if(tar<0 || i>=n) return 0;
        if(tar==0) return 1;

        // take and not-take
        return solve(nums, tar-nums[i], i+1) || solve(nums, tar, i+1);
    }
    bool canPartition(vector<int>& nums) {
        n = nums.size();
        int tar = accumulate(nums.begin(),nums.end(),0);
        if(tar&1) return 0;
        tar/=2;

        return solve(nums, tar, 0);
    }
};
