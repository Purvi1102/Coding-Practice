class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int V=graph.size();
        vector<vector<int>> adj(V);
        for(int i=0;i<V;i++){
            for(auto &j : graph[i]){
                adj[i].push_back(j);
            }
        }
        vector<int> vis(V);
        vector<vector<int>> adjr(V);
        for(int i=0;i<V;i++){
            for(auto & p:adj[i]){
                adjr[p].push_back(i);
                vis[i]++;
            }
        }
        queue<int> q;
        vector<int> ans;
        for(int i=0;i<V;i++){
            if(vis[i]==0) q.push(i);
        }
        while(!q.empty()){
            int node=q.front();
            q.pop();
            ans.push_back(node);
            for(auto i: adjr[node]){
                vis[i]--;
                if(vis[i]==0) q.push(i);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};