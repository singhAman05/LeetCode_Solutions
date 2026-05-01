class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size();
        int m = image[0].size();
        vector<int> del = {-1,0,1,0,-1};
        if(color==image[sr][sc]) return image;
        int orr = image[sr][sc];
        queue<pair<int,int>> q;
        q.push({sr,sc});
        image[sr][sc] = color;
        while(!q.empty()){
            auto it = q.front();q.pop();
            int i = it.first;
            int j = it.second;
            for(int k=0;k<4;k++){
                int ni = i+del[k];
                int nj = j+del[k+1];

                if(ni>=0 && ni<n && nj>=0 && nj<m && image[ni][nj]==orr){
                    q.push({ni,nj});
                    image[ni][nj] = color;
                }
            }
        }
        return image;
    }
};