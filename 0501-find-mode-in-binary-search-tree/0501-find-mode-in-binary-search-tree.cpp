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
    vector<int> findMode(TreeNode* root) {
        stack<TreeNode*> stack;
        unordered_map<int, int> tree_map;
        TreeNode* tree_node = root;
        vector<int> final_value;
        int max = 0;
        stack.push(tree_node);
        while (!stack.empty()) {
            tree_node = stack.top();
            if (tree_map.find(tree_node->val) != tree_map.end()) {
                tree_map[tree_node->val] += 1;
            } else {
                tree_map.insert({tree_node->val, 1});
            }
            stack.pop();
            if (tree_node->left != nullptr) {
                stack.push(tree_node->left);
            }
            if (tree_node->right != nullptr) {
                stack.push(tree_node->right);
            }
            
        }
         for (auto& value : tree_map)  {
            if (value.second > max) {
                final_value.clear();
                final_value.push_back(value.first);
                max = value.second;
            } else if (value.second == max) {
                final_value.push_back(value.first);
            }
        }
        std::sort(final_value.begin(), final_value.end());
        return final_value;
    
        
    }
};