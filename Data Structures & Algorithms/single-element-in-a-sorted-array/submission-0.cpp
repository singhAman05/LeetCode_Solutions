class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // o(n) solution
        int x = 0;
        for(int i=0;i<nums.size();i++){
            x ^= nums[i];
        }
        return x;
    }
};