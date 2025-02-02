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
    bool isSymmetric(TreeNode* root) {
        TreeNode* right_node = root->right;
        TreeNode* left_node = root->left;
        if (right_node == nullptr && left_node == nullptr) {
            return true;
        } else if (right_node == nullptr || left_node == nullptr) {
            return false;
        } 
        std::queue<TreeNode*> right_queue;
        std::queue<TreeNode*> left_queue;
        bool symmetrical = true;
        right_queue.push(right_node);
        left_queue.push(left_node);
        while (!right_queue.empty() || !left_queue.empty()) {
            right_node = right_queue.front();
            left_node = left_queue.front();
            right_queue.pop();
            left_queue.pop();
            if (right_node != nullptr && left_node != nullptr) {
                if (right_node->val != left_node->val) {
                    cout << "hello";
                    symmetrical = false;
                    break;
                }
                right_queue.push(right_node->right);
                right_queue.push(right_node->left);
                left_queue.push(left_node->left);
                left_queue.push(left_node->right);
            } else if ((right_node == nullptr && left_node != nullptr) || (left_node == nullptr && right_node != nullptr)) {
                
                //cout << "bye";
                symmetrical = false;
                break;
            }
        }
        return symmetrical;

    }
};