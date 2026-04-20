class Solution {
public:
    vector<int> asteroidCollision(vector<int>& as) {
        int n = as.size();
        stack<int> st;
        vector<int> ans;

        for (int i = 0; i < n; i++) {
            int fl = 0;
            if (as[i] < 0) {
                while (!st.empty() && st.top() > 0) {
                    if (st.top() < abs(as[i])) {
                        st.pop();
                        ans.pop_back();
                        continue;
                    } else if (st.top() == abs(as[i])) {
                        st.pop();
                        ans.pop_back();
                    }
                    fl = 1;
                    break;
                }
            }
            if (!fl) {
                st.push(as[i]);
                ans.push_back(as[i]);
            }
        }
        return ans;
    }
};