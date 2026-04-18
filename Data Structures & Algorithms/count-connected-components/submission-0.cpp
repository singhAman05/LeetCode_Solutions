class Solution {
public:
    void solve(vector<vector<int>> &adj, int node, vector<int> &vis){
        vis[node]=1;
        for(auto it : adj[node]){
            if(!vis[it]) solve(adj,it,vis);
        }
        return;
    }
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        for(auto it : edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        vector<int> vis(n,0);
        int ans=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                solve(adj,i,vis);
                ans++;
            }
        }
        return ans;
    }
};
