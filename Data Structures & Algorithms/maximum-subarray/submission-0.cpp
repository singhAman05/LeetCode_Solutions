class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int l=0,r=0;
        int n = nums.size();
        int sum = 0;
        int ans = INT_MIN;
        while(r<n){
            sum += nums[r++];
            ans = max(ans, sum);
            if(sum<0) sum=0;
            cout<<ans <<" ";
        }
        return ans;
    }
};
