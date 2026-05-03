# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def insertionSortList(self, head: Optional[ListNode]) -> Optional[ListNode]:

        res = ListNode(0, head)
        last_sorted = head
        
        while last_sorted.next:
            curr = res
            if last_sorted.next.val >= last_sorted.val:
                last_sorted = last_sorted.next
            else:
                to_insert = last_sorted.next
                last_sorted.next = to_insert.next
                while (curr.next and to_insert.val > curr.next.val):
                    curr = curr.next   
                to_insert.next = curr.next
                curr.next = to_insert

        return res.next
