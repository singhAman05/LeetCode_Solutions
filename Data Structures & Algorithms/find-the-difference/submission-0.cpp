class Solution {
public:
    char findTheDifference(string s, string t) {
        int n = s.size();
        int m = t.size();
        int tmp  = 0;
        for(int i=0;i<n;i++){
            tmp^=s[i]-'a';
        }
        for(int i=0;i<m;i++){
            tmp^=t[i]-'a';
        }

        return tmp+'a';
    }
};