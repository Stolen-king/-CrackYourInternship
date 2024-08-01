/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        ListNode* temp=head;
        vector<int>ans;
        while(temp!=NULL){
            int vala=temp->val;
            temp=temp->next;
            ans.push_back(vala);
        }
        sort(ans.begin(),ans.end());

        ListNode* h=new ListNode(-1);
        ListNode* p=h;
        for(int i=0;i<ans.size();i++){
            int vala=ans[i];
            ListNode* nn=new ListNode(vala);
            p->next=nn;
            p=p->next;

        }
        return h->next;
    }
};