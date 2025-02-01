class Solution {
public:
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj_list(n);
        vector<int> indegrees(n, 0);
        vector<vector<int>> ancestors(n);
        vector<vector<int>> visited(n, vector<int>(n, 0));

        vector<int> topological_sort;
        int destination = 0;
        int source = 0;
        for (int i = 0; i < edges.size(); ++i) {
            adj_list.at(edges.at(i).at(0)).push_back(edges.at(i).at(1));                      
        }
        // Pseudocode
        // Topologically sort the graph
        for (int i = 0; i < adj_list.size(); ++i) {
            for (int j = 0; j < adj_list.at(i).size(); j++) {
                indegrees.at(adj_list.at(i).at(j)) += 1;
            }
        }
        queue<int> queue;
        for (int i = 0; i < indegrees.size(); i++) {
            if (indegrees.at(i) == 0) {
                queue.push(i);
            }
        }
        while (!queue.empty()) {
            topological_sort.push_back(queue.front());
            for (int i = 0; i < adj_list.at(queue.front()).size(); ++i) {
                indegrees.at(adj_list.at(queue.front()).at(i)) -= 1;
                if (indegrees.at(adj_list.at(queue.front()).at(i)) == 0) {
                    queue.push(adj_list.at(queue.front()).at(i));
                }
            }
            queue.pop();
        }
        for (int i = 0; i < topological_sort.size(); ++i) {
            for (int j = 0; j < adj_list.at(topological_sort.at(i)).size(); j++) {
                ancestors.at(adj_list.at(topological_sort.at(i)).at(j)).push_back(topological_sort.at(i));
                visited.at(adj_list.at(topological_sort.at(i)).at(j)).at(topological_sort.at(i)) = 1;
                for (int k = 0; k < ancestors.at(topological_sort.at(i)).size(); k++) {
                    if (visited.at(adj_list.at(topological_sort.at(i)).at(j)).at(ancestors.at(topological_sort.at(i)).at(k)) == 0) {  
                        
                        ancestors.at(adj_list.at(topological_sort.at(i)).at(j)).push_back(ancestors.at(topological_sort.at(i)).at(k));
                        visited.at(adj_list.at(topological_sort.at(i)).at(j)).at(ancestors.at(topological_sort.at(i)).at(k)) = 1;
                    }
                }
            }
        }
        for (int i = 0; i < ancestors.size(); i++) {
            std::sort(ancestors.at(i).begin(), ancestors.at(i).end());
        }
        return ancestors;


    }
};