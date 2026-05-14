class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& fl,
                                             vector<vector<int>>& sl) {

        int n = fl.size();
        int m = sl.size();

        vector<vector<int>> ans;

        int i = 0, j = 0;

        while (i < n && j < m) {

            int start = max(fl[i][0], sl[j][0]);
            int end   = min(fl[i][1], sl[j][1]);

            // intersection exists
            if (start <= end) {
                ans.push_back({start, end});
            }

            // move the interval which ends first
            if (fl[i][1] < sl[j][1]) {
                i++;
            } else {
                j++;
            }
        }

        return ans;
    }
};
