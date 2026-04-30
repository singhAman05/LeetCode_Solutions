class Solution {
public:
    int n,m;
    vector<int> del = {-1,0,1,0,-1};
    int fun(vector<vector<int>>& grid, vector<vector<int>>& vis, int i, int j){
        if(i<0 || i>=n || j<0 || j>=m || grid[i][j]==0) return 1;
        if(vis[i][j]==1) return 0;
        vis[i][j] = 1;
        int res = 0;
        for(int k=0;k<4;k++){
            int ni = i+del[k];
            int nj = j+del[k+1];
            res+=fun(grid,vis,ni,nj);
        }
        return res;
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();
        int ans = 0;
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1 && vis[i][j]==0){
                    ans += fun(grid,vis,i,j);
                }
            }
        }
        return ans;
    }
};