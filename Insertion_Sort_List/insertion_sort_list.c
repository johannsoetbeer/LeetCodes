/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* insertionSortList(struct ListNode* head) {
    struct ListNode res;
    res.val = 0;
    res.next = head;

    struct ListNode* last_sorted = head;

    while (last_sorted->next) {
        struct ListNode* curr = &res;

        if (last_sorted->next->val >= last_sorted->val) {
            last_sorted = last_sorted->next;
        } else {
            struct ListNode* to_insert = last_sorted->next;
            last_sorted->next = to_insert->next;
            while (curr->next && curr->next->val < to_insert->val) {
                curr = curr->next;
            } 

            to_insert->next = curr->next;
            curr->next = to_insert;
        }
    }
    return res.next;
}
