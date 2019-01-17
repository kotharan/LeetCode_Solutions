
'''
Done By > Anand Kothari

Question::
Reverse a singly linked list.

Example:

Input: 1->2->3->4->5->NULL
Output: 5->4->3->2->1->NULL

--------------------------------------
Solution: 

'''
# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

# Simple iteratively without extra space

# class Solution(object):
#     def reverseList(self, head):
#         prev = None 
#         curr = head
#         while curr!=None :
#             temp = curr.next
#             curr.next = prev
#             prev = curr
#             curr = temp
#         head = prev
#         return (head)
        
# Recursively

class Solution:
    def reverseList(self, head):
        
        if head is None or head.next is None:
            return head
        
        p = self.reverseList(head.next)
        head.next.next= head
        head.next = None        # It removes the unwanted pointer 
        return p
