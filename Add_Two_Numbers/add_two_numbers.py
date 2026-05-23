# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        res_head = ListNode(0)
        curr = res_head
        carry = 0
        curr1 = l1
        curr2 = l2
        while l1 or l2 or carry > 0:
            val1 = l1.val if l1 else 0
            val2 = l2.val if l2 else 0

            tmp = val1 + val2 + carry
            carry = tmp // 10

            curr.next = ListNode(tmp % 10, None)
            curr = curr.next

            if l1:
                l1 = l1.next
            if l2:
                l2 = l2.next
                     
        return res_head.next
