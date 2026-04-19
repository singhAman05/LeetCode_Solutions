class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        int l=0,r=0;
        while(r<n){
            while(l < n && (nums[l]&1) == 0) l++;
            if((nums[r]&1) == 0 && l < r) swap(nums[l++], nums[r]);
            r++;
        }
        return nums;
    }
};

// 2, 4, 6, 7, 8 --> 2, 4, 6, 8, 7 