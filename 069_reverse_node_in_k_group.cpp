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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL || head->next==NULL ||k==1){
            return head;
        }
        stack<int>st;
        ListNode* ptr=head;
        while(ptr){
            ListNode* p = ptr;
            for(int i=0;i<k;i++){
                if(p->val==NULL){
                    break;
                }
                st.push(p->val);
                p=p->next;
            }
            for(int i=0;i<k;i++){
                ptr->val = st.top();
                st.pop();
                ptr=ptr->next;
            }
        }
        return head;
    }
};