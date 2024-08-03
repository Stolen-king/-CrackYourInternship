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
    ListNode* partition(ListNode* head, int x) {
        vector<int>a,b;
        ListNode* temp=head;
        while(temp){
            if(temp->val  >= x){
                b.push_back(temp->val);
            }
            else{
                a.push_back(temp->val);
            }
            temp=temp->next;
        }

        ListNode* aa= new ListNode(-1);
        ListNode* bb=aa;
        for(int i=0;i<a.size();i++){
            ListNode* cc = new ListNode(a[i]);
            bb->next=cc;
            bb=bb->next;
        }
        for(int i=0;i<b.size();i++){
            ListNode* dd = new ListNode(b[i]);
            bb->next=dd;
            bb=bb->next;
        }
        return aa ->next;
    }
};