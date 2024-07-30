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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int>ans;
        while(list1){
            int vala=list1->val;
            list1=list1->next;
            ans.push_back(vala);
        }
        while(list2){
            ans.push_back(list2->val);
            list2=list2->next;
        }
        sort(ans.begin(),ans.end());
        ListNode* a=new ListNode(-1);
        ListNode* b=a;
        for(int i=0;i<ans.size();i++){
            ListNode* c = new ListNode(ans[i]);
            b->next=c;
            b=c;
        }
        return a->next;
    }
};