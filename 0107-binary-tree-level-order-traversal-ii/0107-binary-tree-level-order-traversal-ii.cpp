/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        queue<TreeNode*> queue;
        vector<vector<int>> orders; 
        TreeNode* tree_node = root;
        if (tree_node == nullptr) {
            return orders;
        }
        queue.push(tree_node);

        while (!queue.empty()) {
            int count = queue.size();
            orders.push_back(vector<int>());
            for (int i = 0; i < count; ++i) {
                tree_node = queue.front();
                queue.pop();
                if (tree_node->left != nullptr) {
                    queue.push(tree_node->left);
                }
                if (tree_node->right != nullptr) {
                    queue.push(tree_node->right);
                }
                orders.at(orders.size() - 1).push_back(tree_node->val);
            }           
        }
        std::reverse(orders.begin(), orders.end());
        return orders;

    }
};