class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int l = 0,r = m-1;
        while(l<n && r>-1){
            int x = matrix[l][r];
            if(x == target) return 1;
            if(x < target) l++;
            else r--;
        }
        return 0;
        
    }
};
