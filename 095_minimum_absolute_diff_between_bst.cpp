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
    void solve(TreeNode* root,vector<int>&a){
        if(root==NULL){
            return;
        }
        a.push_back(root->val);
        solve(root->left,a);
        solve(root->right,a);
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int>a;
        solve(root,a);
        sort(a.begin(),a.end());
        int mini=INT_MAX;
        for(int i=1;i<a.size();i++){
            mini=min(mini,abs(a[i-1]-a[i]));
        }
        return mini;
    }
};