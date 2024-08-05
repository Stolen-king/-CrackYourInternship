void inorder(struct Node *root,vector<int>&a){
    if(root==NULL){
        return;
    }
    inorder(root->left,a);
    a.push_back(root->data);
    inorder(root->right,a);
     
}
float findMedian(struct Node *root)
{
      //Code here
      vector<int>a;
      inorder(root,a);
      int n = a.size();
      if (n == 0) {
        return 0.0;
    }
    
    if (n % 2 == 1) {
        int x = n / 2;
        return a[x];
    } else {
        int x = n / 2;
        int y = x - 1;
        return (a[x] + a[y]) / 2.0;
    }
}