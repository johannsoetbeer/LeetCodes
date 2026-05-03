/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode insertionSortList(ListNode head) {
        
        ListNode res = new ListNode(0, head);
        ListNode last_sorted = head;

        while (last_sorted.next != null) {
            ListNode curr = res;

            if (last_sorted.next.val >= last_sorted.val) {
                last_sorted = last_sorted.next;
            } else {
                ListNode to_insert = last_sorted.next;
                last_sorted.next = to_insert.next;
                while (curr.next != null && curr.next.val < to_insert.val) {
                    curr = curr.next;
                }

                to_insert.next = curr.next;
                curr.next = to_insert;             

            }
        }

        return res.next;

    }
}
