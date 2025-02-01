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
    int countNodes(TreeNode* root) {
        stack<TreeNode*> stack;
        vector<int> nums;
        int num_of_nodes = 1;
        TreeNode* current = root;
        stack.push(current);
        unordered_map<int, int> visited;
        if (current == nullptr) {
            return 0;
        }
        while (!stack.empty()) {
            current = stack.top();
            stack.pop();
            if (current->right != nullptr) {
                stack.push(current->right);
                num_of_nodes += 1;
            }
            if (current->left != nullptr) {
                stack.push(current->left);
                num_of_nodes += 1;
            }
        }
        return num_of_nodes;
    }
};