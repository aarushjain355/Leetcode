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
    int minDepth(TreeNode* root) {
        TreeNode* current = root;
        TreeNode* back_value = root;
        int count = 0;
        queue<TreeNode*> bfs_search;
        bool next_level = true;
        bfs_search.push(current);
        if (root == nullptr) {
            return 0;
        }
        while (!bfs_search.empty()) {
            
            current = bfs_search.front();
            next_level = false;
            if (current->left != nullptr) {
                bfs_search.push(current->left);
            }
            if (current->right != nullptr) {
                bfs_search.push(current->right);
            }   
            if (current->right == nullptr && current->left == nullptr) {
                break;
            }  
            if (current == back_value) {
                next_level = true;
                back_value = bfs_search.back();
            }
            bfs_search.pop();
            
            if (next_level) {
                count += 1;
            }
            
        }
        return count + 1;
    }
};