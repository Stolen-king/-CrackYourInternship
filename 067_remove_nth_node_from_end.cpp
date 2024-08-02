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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len=0;
        ListNode* a=head;
        while(a){
            len++;
            a=a->next;
        }
        if(len==n){
            ListNode* ans=head->next;
            delete head;
            return ans;
        }
        int t=len-n;
        ListNode* ary=head;
        for(int i=1;i<t;i++){
            ary=ary->next;
        }
        ListNode* todel=ary->next;
        ary->next=todel->next;
        delete todel;
        return head;
    }
};