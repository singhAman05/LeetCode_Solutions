class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxprod = nums[0];
        int minprod = nums[0];
        int ans = maxprod;

        for(int i=1;i<n;i++){
            int tmp = nums[i];
            int cpy_maxprod = maxprod;
            maxprod = max({nums[i], maxprod*tmp, minprod*tmp});
            minprod = min({nums[i], cpy_maxprod*tmp, minprod*tmp});

            ans = max(ans, maxprod);
        }

        return ans;
    }
};
