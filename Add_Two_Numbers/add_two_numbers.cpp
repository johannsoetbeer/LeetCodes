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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res_head = new ListNode(0);
        ListNode* curr = res_head;
        int carry = 0;
        int val1, val2, total;

        while (l1 != nullptr|| l2 != nullptr || carry > 0) {
            val1 = 0;
            val2 = 0;
            if (l1) {
                val1 = l1->val;
                l1 = l1->next;
            }
            if (l2) {
                val2 = l2->val;
                l2 = l2->next;
            }

            total = val1 + val2 + carry;
            carry = total / 10;

            curr->next = new ListNode(total % 10);
            curr = curr->next;
        }

        return res_head->next;
    }
};
