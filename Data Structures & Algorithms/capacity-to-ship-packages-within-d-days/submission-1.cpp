class Solution {
public:
    int fun(vector<int>& w, int mid){
        int n = w.size();
        int ans = 1;
        int cnt = w[0];
        for(int i=1;i<n;i++){
            cnt+=w[i];
            if(cnt > mid){
                ans++;
                cnt = w[i];
            }
        }
        return ans;
    }
    int shipWithinDays(vector<int>& w, int days) {
        int l = *max_element(w.begin(),w.end());
        int r = accumulate(w.begin(), w.end(),0);

        while(l<=r){
            int mid = l+(r-l)/2;
            int x = fun(w,mid);
            if(x <= days) r = mid-1;
            else l = mid+1;
        }
        return l;
    }
};