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
    int getDecimalValue(ListNode* head) {
        vector<int>ans;
        while(head!=NULL){
            ans.push_back(head->val);
            head=head->next;
        }
        int sum=0;
        reverse(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++){
            if(ans[i]==1){
                int va = pow(2,i);
                sum+=va;
            }
        }
        return sum;
    }
};