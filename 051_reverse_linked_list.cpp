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
    ListNode* reverseList(ListNode* head) {
        
        if(head==NULL||head->next==NULL){
            return head;
        }
        ListNode* a=head->next;
        ListNode* b=head;
        ListNode* c=NULL;
        while(a!=NULL){
            b->next=c;
            c=b;
            b=a;
            a=a->next;
        }
        b->next=c;
        return b;
    }
};