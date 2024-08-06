class Solution {
public:
    void inorder(TreeNode* root, int low, int high, int &sum) {
        if (root == nullptr) {
            return;
        }

        if (root->val >= low && root->val <= high) {
            sum += root->val;
        }
        
        if (root->val > low) {
            inorder(root->left, low, high, sum);
        }
        
        if (root->val < high) {
            inorder(root->right, low, high, sum);
        }
    }

    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum = 0;
        inorder(root, low, high, sum);
        return sum;
    }
};
