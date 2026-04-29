class Solution {
public:
    int findMin(vector<int> &nums) {
        int n = nums.size();
        int l = 0;
        int r = n-1;
        while(l<r){
            int mid = l+(r-l)/2;
            if(nums[mid] <= nums[r]) r=mid;
            else if(nums[mid] >= nums[l])l=mid+1;
        }
        return nums[l];
    }
};

// 1 2 3 4 -> 3 4 1 2
// l = 0, r = 3

// mid = 1 -> l=2,r=3
// mid = 2 -> l=2,r=1

// return l;