class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<vector<int>> adj_list(rooms.size());
        int source = 0;
        int count = 1;
        queue<int> q;
        vector<int> visited(rooms.size(), 0);
        visited.at(0) = 1;
        for (int i = 0; i < rooms.size(); i++) {
            for (int j = 0; j < rooms.at(i).size(); j++) {
                adj_list.at(i).push_back(rooms.at(i).at(j));
            }
        }
        q.push(source);
        while (!q.empty()) {
            source = q.front();
            q.pop();
            for (int x = 0; x < adj_list.at(source).size(); x++) {
                if (visited.at(adj_list.at(source).at(x)) == 0) {
                    visited.at(adj_list.at(source).at(x)) = 1;
                    q.push(adj_list.at(source).at(x));
                    count += 1;
                }
            }
            
        }
        if (count != rooms.size()) {
            return false;
        } else {
            return true;
        }


    }
};