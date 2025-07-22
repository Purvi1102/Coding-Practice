class Solution {
  public:
    // Function to find the shortest path from source to all other nodes
    vector<int> shortestPath(vector<vector<int>>& adj, int src) {
        // code here
        int m=adj.size();
        vector<int> dist(m);
        for(int i=0;i<m;i++) dist[i]=1e9;
        queue<int> q;
        q.push(src);
        dist[src]=0;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto i: adj[node]){
                if(dist[node]+1<dist[i]) {
                    dist[i]=dist[node]+1;
                    q.push(i);
                }
            }
        }
        vector<int> ans(m,-1);
        for(int i=0;i<m;i++){
            if(dist[i]!=1e9) ans[i]=dist[i];
        }
        return ans;
    }
};