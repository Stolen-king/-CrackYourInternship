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
class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {

        // First Solution (Hashmap)
        unordered_map<int, int> count;
        vector<int> nodes;
        if (!head)
        {
            return head;
        }
        while (head != nullptr)
        {
            int val = head->val;
            count[val]++;
            head = head->next;
        }

        for (auto it = count.begin(); it != count.end(); it++)
        {

            if (it->second == 1)
            {
                nodes.push_back(it->first);
            }
        }
        if (nodes.size() == 0)
        {
            return nullptr;
        }
        sort(nodes.begin(), nodes.end());

        int i = 0;
        ListNode *dummy = new ListNode();
        ListNode *prev = dummy;
        while (i < nodes.size())
        {
            ListNode *node = new ListNode(nodes[i]);
            prev->next = node;
            prev = node;
            i++;
        }
        ListNode *h = dummy->next;
        delete dummy;
        return h;
    }
};