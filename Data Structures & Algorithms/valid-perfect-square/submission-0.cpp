class Solution {
public:
    bool isPerfectSquare(int num) {
        long long l=0,r=num;
        while(l<=r){
            long long mid = l + (r-l)/2;
            if(mid * mid == num) return 1;
            else if(mid * mid < num) l = mid+1;
            else r = mid-1;
        }
        return 0;
    }
};