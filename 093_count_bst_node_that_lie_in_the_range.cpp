class Solution{
public:
    void solve(Node *root,vector<int>&a){
        if(root==NULL){
            return;
        }
        solve(root->left,a);
        a.push_back(root->data);
        solve(root->right,a);
    }
    int getCount(Node *root, int l, int h)
    {
      // your code goes here  
      vector<int>a;
      solve(root,a);
      int cnt=0;
      for(int i=0;i<a.size();i++){
          if(a[i]>=l && a[i]<=h){
              cnt++;
          }
      }
      return cnt;
    }
};