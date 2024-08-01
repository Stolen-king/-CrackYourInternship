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
    ListNode* mergeKLists(vector<ListNode*>& nums) {
        vector<int> ans;  // Corrected variable name
        for (int i = 0; i < nums.size(); i++) {
            ListNode* a = nums[i];
            while (a) {
                ans.push_back(a->val);
                a = a->next;
            }
        }
        
        sort(ans.begin(), ans.end());
        
        // Check if ans is empty
        if (ans.empty()) return nullptr;
        
        ListNode* head = new ListNode(ans[0]);
        ListNode* b = head;  // Start with head
        
        for (int i = 1; i < ans.size(); i++) {
            ListNode* p = new ListNode(ans[i]);
            b->next = p;
            b = b->next;
        }
        
        return head;
    }
};