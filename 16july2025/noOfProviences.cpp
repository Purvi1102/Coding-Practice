class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int count = 0;
        int V = isConnected.size();
        vector<int> ans;
        vector<int> vis(V, 0);
        for (int i = 0; i < V; ++i) {
            if (vis[i] == 0) {
                queue<int> q;
                q.push(i);
                vis[i] = 1;

                while (!q.empty()) {
                    int node = q.front();
                    q.pop();

                    for (int j = 0; j < V; ++j) {
                        if (isConnected[node][j] == 1 && vis[j] == 0) {
                            q.push(j);
                            vis[j] = 1;
                        }
                    }
                }
                count++; 
            }
        }
        return count;
    }
};