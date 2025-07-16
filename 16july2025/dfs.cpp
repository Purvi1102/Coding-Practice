class Solution {
    vector<int> ans;
  public:
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        int V=adj.size();
        vector<int> ans;
        vector<int> vis(V,0);
        int start=0;
        dfs(start,adj,ans,vis);
        return ans;
       
    }
    void dfs(int start, vector<vector<int>>& adj,vector<int> & ans, vector<int> & vis){
        vis[start]=1;
        ans.push_back(start);
        for(auto i: adj[start]){
            if(vis[i]==0){
                vis[i]=1;
                dfs(i,adj,ans,vis);
            }
        }
    }
};