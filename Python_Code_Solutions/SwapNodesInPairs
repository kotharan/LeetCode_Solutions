'''
Done By -> Anand Kothari

Question:: 

Given a linked list, swap every two adjacent nodes and return its head.

Example:

Given 1->2->3->4, you should return the list as 2->1->4->3.
Note:

Your algorithm should use only constant extra space.
You may not modify the values in the list's nodes, only nodes itself may be changed.


Solution:

'''


# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def swapPairs(self, head):
        fakeNode = ListNode(-1)
        fakeNode.next = head
        
        prev , p = fakeNode , head
        while p!= None and p.next!=None:
            q = p.next
            r = p.next.next
            q.next = p 
            p.next = r 
            prev.next = q
            prev = p 
            p = r
        return fakeNode.next
