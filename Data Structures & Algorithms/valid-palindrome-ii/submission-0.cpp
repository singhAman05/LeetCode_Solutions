class Solution {
public:
    bool fun(string &s, int l, int r, int fl){
        if(l>=r) return 1;
        if(s[l]!=s[r]){
            if(fl){
                return fun(s,l+1,r,!fl) || fun(s,l,r-1,!fl);
            }
            else return 0;
        }
        return fun(s, l+1, r-1, fl);
    }
    bool validPalindrome(string s) {
        int n = s.size();
        int l=0,r=n-1;
        return fun(s,l,r,1);
    }
};