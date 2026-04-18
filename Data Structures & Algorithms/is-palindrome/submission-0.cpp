class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int l=0,r=n-1;
        while(l<=r){
            while(l<=r && !isalnum(s[l]))l++;
            while(l<=r && !isalnum(s[r]))r--;

            if(l<=r && tolower(s[l])==tolower(s[r])){
                l++;r--;continue;
            }
            else if(l<=r) return 0;
        }
        return 1;
    }
};
