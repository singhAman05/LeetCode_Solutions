class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int tot = accumulate(nums.begin(),nums.end(),0);
        int n = nums.size();
        int sum1 = INT_MIN, sum2 = INT_MAX;
        int cnt = 0;
        for(int i=0;i<n;i++){
            cnt+=nums[i];
            sum1=max(sum1,cnt);
            if(cnt<0) cnt = 0;
        }
        cnt = 0;
        for(int i=0;i<n;i++){
            cnt+=nums[i];
            sum2=min(sum2,cnt);
            if(cnt>0) cnt = 0;
        }
        if (sum1 < 0) return sum1;
        return max(sum1, tot-sum2);
    }
};