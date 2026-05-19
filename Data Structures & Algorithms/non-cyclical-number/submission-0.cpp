class Solution {
public:
    unordered_set<int> st;
    int nexNum(int n){
        int ans = 0;
        while(n>0){
            ans+=pow(n%10,2);
            n/=10;
        }
        return ans;
    }
    bool solve(int n){
        if(st.find(n)!=st.end()) return 0;
        if(n==1) return 1;
        st.insert(n);
        int x = nexNum(n);
        return solve(x);
    }
    bool isHappy(int n) {
        return solve(n);
    }
};