class Solution {
public:
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        vector<vector<int>> ans(n);

        // Build the adjacency list
        for (int i = 0; i < edges.size(); i++) {
            adj[edges[i][0]].push_back(edges[i][1]);
        }

        // Helper function to perform DFS
        function<void(int, int)> dfs = [&](int node, int ancestor) {
            for (int child : adj[node]) {
                if (ans[child].empty() || ans[child].back() != ancestor) {
                    ans[child].push_back(ancestor);
                    dfs(child, ancestor);
                }
            }
        };

        // Find ancestors for each node
        for (int i = 0; i < n; i++) {
            dfs(i, i);
        }

        return ans;
    }
};