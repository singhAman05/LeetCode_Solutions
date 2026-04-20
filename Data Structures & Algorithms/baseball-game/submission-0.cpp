class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<string> st;
        for(auto it : operations){
            if(it=="+"){
                int a = stoi(st.top());
                st.pop();
                int b = stoi(st.top());
                st.push(to_string(a));
                st.push(to_string(a+b));
            }
            else if(it=="C"){
                if(!st.empty())st.pop();
            }
            else if(it=="D"){
                int x = stoi(st.top());
                int y = x*2;
                st.push(to_string(y));
            }
            else st.push(it);
        }
        int ans = 0;
        while(!st.empty()){
            ans += stoi(st.top());
            st.pop();
        }
        return ans;
    }
};