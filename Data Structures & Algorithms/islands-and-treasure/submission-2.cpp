class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int,pair<int,int>>> q;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==0){
                    q.push({0,{i,j}});
                }
            }
        }

        vector<int> del = {-1,0,1,0,-1};

        while(!q.empty()){
            int si = q.size();
            while(si--){
                auto it = q.front();q.pop();
                int dis = it.first;
                int i = it.second.first;
                int j = it.second.second;
                grid[i][j] = dis;
                
                for(int k=0;k<4;k++){
                    int ni = i+del[k];
                    int nj = j+del[k+1];
                    if(ni>=0 && ni<n && nj>=0 && nj<m && grid[ni][nj]!=-1 && grid[ni][nj]>dis+1){
                        grid[ni][nj] = dis+1;
                        q.push({dis+1,{ni,nj}});
                    }
                }
            }
        }

        return;
    }
};
