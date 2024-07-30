/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int l1=0;
        int l2=0;
        ListNode* a1=headA;
        while(a1){
            l1++;
            a1=a1->next;
        }
        ListNode* a2=headB;
        while(a2){
            l2++;
            a2=a2->next;
        }
        if(l1>l2){
            int d=l1-l2;
            while(d--){
                headA=headA->next;
            }
        }
        else{
            int dif=l2-l1;
            while(dif--){
                headB=headB->next;
            }
        }
        while(headA!=NULL || headB!=NULL){
            if(headA==headB){
                break;
            }
            headA=headA->next;
            headB=headB->next;
        }
        return headA;
    }
};