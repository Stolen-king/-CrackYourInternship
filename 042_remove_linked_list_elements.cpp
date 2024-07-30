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
    ListNode* removeElements(ListNode* head, int val) {
        vector<int> ans;
        ListNode* p = new ListNode(-1); // Dummy node
        ListNode* temp = p;

        // Traverse the linked list and store non-val values in the vector
        while (head) {
            int data = head->val;
            if (data != val) {
                ans.push_back(data);
            }
            head = head->next;
        }

        // Create the new linked list using values from the vector
        for (int i = 0; i < ans.size(); i++) {
            ListNode* c = new ListNode(ans[i]);
            temp->next = c;
            temp = c;
        }

        return p->next;
    }
};