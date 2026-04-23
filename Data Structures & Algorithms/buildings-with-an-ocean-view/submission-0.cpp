class Solution {
public:
    vector<int> findBuildings(vector<int>& heights) {
        int n = heights.size();
        vector<int> ans;
        int new_max = heights[n-1];
        ans.push_back(n-1);
        for(int i=n-2;i>=0;i--){
            if(heights[i] > new_max){
                new_max = heights[i];
                ans.push_back(i);
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};