class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int cnt = 0;
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                }
                else if(grid[i][j]==1) cnt++;
            }
        }

        cout<<"fres before : "<<cnt<<endl;
        vector<int> del = {-1,0,1,0,-1};
        int time = 0;
        while(!q.empty()){
            int si = q.size();
            int fl = 0;
            while(si--){
                auto it = q.front();q.pop();
                int i = it.first;
                int j = it.second;

                for(int k=0;k<4;k++){
                    int ni = i+del[k];
                    int nj = j+del[k+1];
                    if(ni>=0 && ni<n && nj>=0 && nj<m && grid[ni][nj]==1){
                        grid[ni][nj]=2;
                        cnt--;
                        fl=1;
                        q.push({ni,nj});
                    }
                }
            }
            if(fl) time+=1;
            cout<<"fres inbw: "<<cnt<<" : time : "<<time<<" : queue size : "<<q.size()<<endl;
        }

        if(cnt>0) return -1;
        return time;
    }
};
