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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        if(slow==NULL){
            return NULL;
        }
        while (fast != NULL) {
            int a = slow->val;
            int b = fast->val;
            if (a == b) {
                while (fast!=NULL && slow->val == fast->val) {
                    fast = fast->next;
                }
                slow->next=fast;
            }
            else{
                slow=slow->next;
            }
        }
        return head;
    }
};