/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        
        queue<Node*> bfs_queue;
        Node* next_node = root;
        Node* prev_node = root;
        Node* root_copy = next_node;
        if (root == nullptr) {
            return root;
        }
        bfs_queue.push(next_node);
        while (!bfs_queue.empty()) {
            int size = bfs_queue.size(); 
            prev_node = nullptr;
            for (int i = 0; i < size; ++i) {
                next_node = bfs_queue.front();
                bfs_queue.pop();
                if (prev_node != nullptr) {
                    if (next_node != nullptr) {
                        prev_node->next = next_node;
                    }
                }
                prev_node = next_node;
                if (next_node->left != nullptr) {
                    bfs_queue.push(next_node->left);
                }
                if (next_node->right != nullptr) {
                    bfs_queue.push(next_node->right);
                }
                
            } 
            
        }
        
        return root_copy;
    }
};