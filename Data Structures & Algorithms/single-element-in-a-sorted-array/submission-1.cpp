class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // o(n) solution
        // int x = 0;
        // for(int i=0;i<nums.size();i++){
        //     x ^= nums[i];
        // }
        // return x;

        // O(log(n)) solution
        int l = 0, r = nums.size() - 1;

        while (l < r) {
            int mid = l + (r - l) / 2;

            // Ensure mid is even
            if (mid % 2 == 1) mid--;

            if (nums[mid] == nums[mid + 1]) {
                // Pair is valid → move right
                l = mid + 2;
            } else {
                // Break in pattern → answer on left
                r = mid;
            }
        }

        return nums[l];

    }
};