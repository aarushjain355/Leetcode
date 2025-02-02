/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
       TreeNode *up;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        queue<TreeNode*> queue;
        TreeNode* node = root;
        queue.push(node);
        int count = 0;
        if (node == nullptr) {
            return 0;
        }
        while (!queue.empty()) {   
            int size = queue.size();      
            for (int i = 0; i < size; i++) {
                node = queue.front();
                queue.pop();

                if (node->right != nullptr) {
                    queue.push(node->right);
                } 
                if (node->left != nullptr) {
                    queue.push(node->left);          
                } 

            }           
            count += 1;
           
        }
        
        
        return count;
    }
};