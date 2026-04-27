class Solution {
public:
    int fun(vector<int>& nums, int mid){
        int n = nums.size();
        int cnt = 0;
        for(int i=1;i<n;i++){
            int diff = abs(nums[i]-nums[i-1]);
            if(diff<=mid){
                cnt++;
                i++;
            }
        }
        return cnt;
    }
    int minimizeMax(vector<int>& nums, int p) {
        int l = 0;
        int r = *max_element(nums.begin(),nums.end()) - *min_element(nums.begin(),nums.end());
        sort(nums.begin(),nums.end());
        while(l<=r){
            int mid = l+(r-l)/2;
            int x = fun(nums,mid);
            if(x >= p){
                r=mid-1;
            }
            else l=mid+1;
        }
        return l;
    }
};