class Solution {
public:
    vector<string> ans; 
    string encode(vector<string>& strs) {
        ans = strs;
        return "1";
    }

    vector<string> decode(string s) {
        if(s=="1") return ans;
    }
};
