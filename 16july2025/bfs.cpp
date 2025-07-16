class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        // Code here
        int V=adj.size();
       vector<int> ans;
       vector<int> vis(V,0);
       vis[0]=1;
       queue<int> q;
       q.push(0);
       while(!q.empty()){
           int node=q.front();
           q.pop();

               if(vis[i]==0){


           ans.push_back(node);
           for(auto i:adj[node]){
               if(vis[i]==0){
                   q.push(i);
                   vis[i]=1;
               }
           }
       }
       return ans;
        
    }
};