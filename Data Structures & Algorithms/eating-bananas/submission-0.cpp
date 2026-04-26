class Solution {
public:
    int fun(vector<int> & piles, int mid){
        int ans = 0;
        int n = piles.size();
        for(int i=0;i<n;i++){
            ans += (piles[i] + mid - 1) / mid;
        }
        return ans;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(), piles.end());
        int l = 1, r = *max_element(piles.begin(), piles.end());
        while(l<=r){
            int mid = l+(r-l)/2;
            int x = fun(piles,mid);
            if(x <= h) r=mid-1;
            else l=mid+1;
        }
        return l;
    }
};
