class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        for(auto it : nums){
            if(st.find(it)!=st.end()) return 1;
            st.insert(it);
        }
        return 0;
    }
};