class Solution {
  public:
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        vector<int> ans;
        vector<int> vis(V,0);
        stack<int> s;
        for(int i=0;i<V;i++){
            if(vis[i]==0) dfs(edges,s,vis,i);
        }
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        return ans;
    }
    void dfs(vector<vector<int>>& edges,stack<int> & s, vector<int> & vis,int node){
        vis[node]=1;
        for(auto i: edges[node]){
            if(vis[i]==0) dfs(edges,s,vis,i);
        }
        s.push(node);
    }
};