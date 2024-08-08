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
    bool aresame(TreeNode* a, TreeNode* b){
        if(a==NULL && b==NULL){
            return true;
        }
        if(a==NULL || b==NULL){
            return false;
        }
        if(a->val!=b->val){
            return false;
        }
        else{
            return (aresame(a->left,b->left) && aresame(a->right,b->right));
        }
    }
    void traverse(TreeNode* a, TreeNode* b,bool &ans){
        if(ans){
            return;
        }
        if(a->val == b->val && aresame(a,b)){
            ans=true;
            return;
        }
        if(a->left!=NULL){
            traverse(a->left,b,ans);
        }
        if(a->right!=NULL){
            traverse(a->right,b,ans);
        }
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        bool ans=false;
        traverse(root,subRoot,ans);
        return ans;
    }
};