class Solution {
public:
    int n,m;
    vector<int> del = {-1,0,1,0,-1};

    void dfs(vector<vector<char>>& board, vector<vector<int>>& vis, int i, int j){
        if(i<0 || i>=n || j<0 || j>=m || board[i][j]=='X' || vis[i][j]) return;

        vis[i][j] = 1;

        for(int k=0;k<4;k++){
            int ni = i+del[k];
            int nj = j+del[k+1];
            dfs(board, vis, ni, nj);
        }

        return;
    }
    void solve(vector<vector<char>>& board) {
        n = board.size();
        m = board[0].size();

        vector<vector<int>> vis(n,vector<int>(m,0));

        for(int i=0;i<n;i++){
            if(board[i][0]=='O' && !vis[i][0]) dfs(board, vis, i, 0);
            if(board[i][m-1]=='O' && !vis[i][m-1]) dfs(board, vis, i, m-1);
        }

        for(int j=0;j<m;j++){
            if(board[0][j]=='O' && !vis[0][j]) dfs(board, vis, 0, j);
            if(board[n-1][j]=='O' && !vis[n-1][j]) dfs(board, vis, n-1, j);
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]=='O' && !vis[i][j]) board[i][j]='X';
            }
        }
    }
};
