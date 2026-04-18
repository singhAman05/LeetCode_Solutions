class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<pair<int,int>> adj[n];
        for(auto it : flights){
            adj[it[0]].push_back({it[1],it[2]});
        }

        vector<int> dis(n,INT_MAX);
        queue<tuple<int,int,int>> q;
        q.emplace(src,0,k+1);
        dis[src]=0;

        while(!q.empty()){
            auto [node,dist,rem] = q.front();
            q.pop();
            if(rem==0) continue;
            for(auto it : adj[node]){
                if(dis[it.first] > dist+it.second){
                    dis[it.first] = dist + it.second;
                    q.emplace(it.first,dis[it.first],rem-1);
                }
            }
        }

        return dis[dst]==INT_MAX ? -1 : dis[dst];
    }
};