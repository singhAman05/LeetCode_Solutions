class Solution {
public:
    int ans = 1;
    string longestPalindrome(string s) {
        int n = s.size();
        int a=0,b=0;
        for(int i=0;i<n;i++){
            int l=i,r=i;
            while(l>=0 && r<n && s[l]==s[r]){
                l--;r++;
            }
            if(r-l-1 > ans){
                ans = r-l-1;
                a=l+1;
            }

            l=i,r=i+1;
            while(l>=0 && r<n && s[l]==s[r]){
                l--;r++;
            }
            if(r-l-1 > ans){
                ans = r-l-1;
                a=l+1;
            }
        }

        return s.substr(a, ans);
    }
};
