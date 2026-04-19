class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        string ans = "";
        int i=0;
        while(i<n){
            int j = i + 1;
            int cnt = 1;
            while(j<n && chars[i]==chars[j]) {
                cnt++;
                j++;
            }
            ans+=chars[i];
            if(cnt>1){
                ans += to_string(cnt);
            }
            i=j;
        }
        for(int k=0; k<ans.size(); k++) chars[k] = ans[k];
        return ans.size();
    }
};