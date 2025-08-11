class Solution {
  public:
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        vector<int> vis(V,0);
        vector<vector<int>> adj(V);
        for (auto &e : edges) {
            int u = e[0], v = e[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        for(int i=0;i<V;i++){
            if(vis[i]==0) {
                if(check(i,adj,vis)==true) return true;
            }
        }
        return false;
        
    }
    bool check(int src,vector<vector<int>> & adj,vector<int> & vis){
        vis[src]=1;
        queue<pair<int,int>> q;
        q.push({src,-1});
        while(!q.empty()){
            int node=q.front().first;
            int par=q.front().second;
            q.pop();
            for(auto & i:adj[node]){
                if(vis[i]==0){
                    vis[i]=1;
                    q.push({i,node});
                }
                else if(par!=i) return true;
            }
        }
        return false;
    }
};
