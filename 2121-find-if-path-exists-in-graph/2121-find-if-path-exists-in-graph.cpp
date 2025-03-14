class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if (edges.size() == 0) {
            return true;
        }
        vector<vector<int>> adj_list(n);
        vector<int> visited(n, 0);
        int current = 0;
        int found = false;
        stack<int> dfs_stack;
        for (int i = 0; i < edges.size(); ++i) {
            adj_list[edges[i][0]].push_back(edges[i][1]);
            adj_list[edges[i][1]].push_back(edges[i][0]);
        }
        dfs_stack.push(source);
        while (!dfs_stack.empty()) {
            current = dfs_stack.top();
            dfs_stack.pop();
            if (current == destination) {
                found = true;
                break;
            }
            for (int i = 0; i < adj_list[current].size(); i++) {
                if (visited[adj_list[current][i]] == 0) {
                    dfs_stack.push(adj_list[current][i]);
                    visited[adj_list[current][i]] = 1;
                }
            }
        }
        return found;

        
    }
};