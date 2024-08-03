
class Solution {
  public:
    // Function which returns the  root of the flattened linked list.
    Node *flatten(Node *root) {
        // Your code here
        vector<int>a;
        Node* r =root;
        while(r){
            Node* c = r;
            while(c){
                a.push_back(c->data);
                c=c->bottom;
            }
            r=r->next;
        }
        sort(a.begin(),a.end());
        Node* ans=NULL;
        Node* t=NULL;
        
        for(int i=0;i<a.size();i++){
            Node* p = new Node(a[i]);
            if(ans==NULL){
                ans=p;
                t=p;
            }else{
                t->bottom=p;
                t=t->bottom;
            }
        }
        
        return ans;
    }
};