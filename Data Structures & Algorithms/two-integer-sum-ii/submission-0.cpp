class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int l=0,r=n-1;
        while(l<r){
            int tmp = nums[l]+nums[r];
            if(tmp < target)l++;
            else if(tmp > target)r--;
            else return {l+1, r+1};
        }
        return {-1,-1};
    }
};
