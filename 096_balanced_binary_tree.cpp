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
    int hobt(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        return 1 + max(hobt(root->left),hobt(root->right));
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        int ls = hobt(root->left);
        int rs = hobt(root->right);

        if(abs(ls-rs)>1){
            return false;
        }

        bool lb = isBalanced(root->left);
        bool rb = isBalanced(root->right);
        return lb&&rb;
        
    }
};